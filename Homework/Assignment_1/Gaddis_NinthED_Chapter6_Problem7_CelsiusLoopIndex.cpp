#include <iostream>
using namespace std;

float FtoC(float F){ //Declaring : A real number that has Fahrenheit converted to Celsius
    return (5.0/9.0)*(F-32); // Ends current function but stores Celsius formula
}

int main()
{
    cout<<"F\tC"<<endl; //Outputs Fahrenheit and Celsius on two different lines
    for(int i = 0;i<=20;i++){ //Having an index of 20 to store our values
        cout<<i<<"\t"<<FtoC(i)<<endl; //Pushing the values into the index for output
    }
    return 0; //Ends the program
}
