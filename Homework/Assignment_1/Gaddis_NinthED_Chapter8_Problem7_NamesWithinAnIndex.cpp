#include <iostream>

#include <string>

using namespace std;

const int NUM_NAMES = 20; //Declaring : Holds a real number of quantity of names. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647

void SortSe(string names[]); //Not returning value. Will do fewer search swaps in the string data type
int BinSrch(string names[], int l, int r, string x); //Declaring : Holds a real number of the string. The Binary Search starts at the middle for the sequential string data type
int main()
{
string names[NUM_NAMES] = { //Initializing names into an array
"Collins, Bill", "Smith, Bart", "Allen, Jim",
"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
"Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
"Looney, Joe", "Wolfe, Bill", "James, Jean",
"Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
"Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
"Pike, Gordon", "Holland, Beth"};

SortSe(names); //Sorting the names using selection sorting algorithm to implement binary search
cout<<"After Sorting the names are: "<<endl; //Output after sorting the names using selection sort
for(int i=0; i<NUM_NAMES; i++) // Holds a real number in an index
cout<<i<<"\t"<<names[i]<<endl; //Output is the index full of names
string search;
while(1){ //Loops as long as the condition is true or met
cout<<"\nEnter name to search(type exit to exit): "; //Output is to enter name or exit to quit the program.
cin.clear();
getline(cin, search); //To get a line from the string
if(search.compare("exit")==0) 
break; 
int pos = BinSrch(names, 0, NUM_NAMES-1, search);//Searching name in sorted names array
if(pos==-1) //If the function is return -1 and name is not found then will return to previous position
cout<<search<<" not found"<<endl;
else //If prior condition is not met
cout<<search<<" found at index "<<pos<<endl; //Output that name is found in a specific index
}
return 0;//End of program
}

void SortSe(string names[])//definition of sorting selection without showing output
{
for (int i = 0; i < NUM_NAMES; i++)//If the //Will continue to loop if condition is true
{
for (int j = i + 1; j < NUM_NAMES; j++)//Will continue to loop if condition is true
{
if (names[i].compare(names[j]) > 0)//If the condition is true then this will happen
{
string temp = names[i]; //Putting characters and numbers within a chronological string
names[i] = names[j];
names[j] = temp;
}
}
}
}

int BinSrch(string names[], int l, int r, string x) //function definition for binary search
{
while (l <= r)//If the condition is true, the loop will continue
{
int m = l + (r - l) / 2;//Declaring : Holds a real number. The Binary Search starts at the middle for the sequential string data type
if (names[m] == x) //If the condition is met then this happens
return m; //return to main function
if (names[m].compare(x) < 0)//If the condition is true then this will happen
l = m + 1;
else //If the condition was not met then this happens instead
r = m - 1;
}
return -1;//return to main function
}
