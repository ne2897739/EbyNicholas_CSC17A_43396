#include <iostream>

using namespace std;

int main()
{int mnth; // Declaring : Holds a real number for months. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647.
int yr; // Declaring : Holds a real number for years. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647.
cout<<"Enter a month (1-12): "; //Output question
cin>>mnth; //Input a month  
cout<<"Enter a year: "; //Output question
cin>>yr; //Input year
if((yr%100 == 0 && yr%400 == 0)||((yr%100 != 0 && yr%4 == 0))) //Checking the condition for a leap year
{
switch(mnth) //Differentiating months among other months in cases
{
case 1:cout<<31; //In January, there are this many days
break; //Next case is reached
case 2:cout<<29;//In February, there are this many days
break;//Next case is reached
case 3:cout<<31;//In March, there are this many days
break;//Next case is reached
case 4:cout<<30;//In April, there are this many days
break;//Next case is reached
case 5:cout<<31;//In May, there are this many days
break;//Next case is reached
case 6:cout<<30;//In June, there are this many days
break;//Next case is reached
case 7:cout<<31;//In July, there are this many days
break;//Next case is reached
case 8:cout<<31;//In August, there are this many days
break;//Next case is reached
case 9:cout<<30;//In September, there are this many days
break;//Next case is reached
case 10:cout<<31;//In October, there are this many days
break;//Next case is reached
case 11:cout<<30;//In November, there are this many days
break;//Next case is reached
case 12:cout<<31;//In December, there are this many days
break;//Next case is reached
}}

else{ //If there is a leap year, then the answer will stem from this program instead
switch(mnth){ //Differentiating months among other months in cases
case 1:cout<<31;//In January, there are this many days
break;//Next case is reached
case 2:cout<<28;//In February, there are this many days
break;//Next case is reached
case 3:cout<<31;//In March, there are this many days
break;//Next case is reached
case 4:cout<<30;//In April, there are this many days
break;//Next case is reached
case 5:cout<<31;//In May, there are this many days
break;//Next case is reached
case 6:cout<<30;//In June, there are this many days
break;//Next case is reached
case 7:cout<<31;//In July, there are this many days
break;//Next case is reached
case 8:cout<<31;//In August, there are this many days
break;//Next case is reached
case 9:cout<<30;//In September, there are this many days
break;//Next case is reached
case 10:cout<<31;//In October, there are this many days
break;//Next case is reached
case 11:cout<<30;//In November, there are this many days
break;//Next case is reached
case 12:cout<<31;//In December, there are this many days
break;//Next case is reached
}}
cout<<" days \n"; //Output final days
return 0; //End of program
}