#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   
   const float ynpdllr = 98.93; // Declaring : Holds a real number (with decimal place) of Japanese Yens. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
   const float erpdllr = 0.74; // Declaring : Holds a real number (with decimal place) of Euros. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
  
   float amount; // Declaring : Holds a real number of amount of funds
   
   cout<<"Enter amount of funds (in dollars): "; //Output question
   cin>>amount; //Input amount of funds
   
   cout<<"Amount in Japanese Yen = "<<setprecision(2)<<fixed<<(amount * ynpdllr)<<endl; //Output Japanese Yen to two decimal places
   cout<<"Amount in Euros = "<<setprecision(2)<<fixed<<(amount * erpdllr)<<endl; //Output Euros to two decimal places
   return 0; //End of program
}
