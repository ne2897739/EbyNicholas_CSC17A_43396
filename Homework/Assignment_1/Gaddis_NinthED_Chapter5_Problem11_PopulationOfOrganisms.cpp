#include <iostream>
#include <string>
using namespace std;
int main() {
int d;// Declaring : Holds a real number of days multiplied. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647.
string s; //Declaring : Holds a real number in a string
float p,n; //Declaring : Holds a real number of percentage and starting population. Is 4 bytes. Numbers between ±3.4E–38 and ±3.4E38.

cout<<"Starting Population:"; //Output question
cin>>n; //Input starting population
if(n<2)//Input Validation for starting population
{
cout<<"Invalid input. please enter a value greater than 1 ";
exit(0); //End current function
}

cout<<"Daily Increase:"; //Output question
cin>>s; //Input percentage of increase 
s.erase (s.size()-1);//removing % symbol
p = stof(s); //converting value to float
if(p<=0)//Input Validation for increase %
{
cout<<"Invalid input. please Enter a Positive value"; //Wrong input
exit(0); //End current function
}

cout<<"Days:"; //Output question
cin>>d; //Input days that will multiply 
if(d<1)//Input Validation for days
{
cout<<"Invalid input. please Enter a value greater than 0"; //Invalid input
exit(0); //End current function
}

for(int i = 1 ; i <= d ; i++) //A real number held in an index. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647.
{
n = n + ((n*p)/100); //Finding daily increase and adding
cout<<"Population on day "<<i<<" day :"<<int(n)<<"\n"; //Output
}
cout<<"\nTotal population after "<<d<<" days ="<<int(n);//Output
return 0;//End of program
}