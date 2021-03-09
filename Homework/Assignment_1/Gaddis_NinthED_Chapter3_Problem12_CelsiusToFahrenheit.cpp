#include <iostream>

using namespace std;

int main()
{
    float cels; // Declaring : Holds a real number in Celsius. Is 4 bytes. Numbers between ±3.4E–38 and ±3.4E38.
    float fahr; // Declaring : Holds a real number in Fahrenheit. Is 4 bytes. Numbers between ±3.4E–38 and ±3.4E38.
    cout << "Enter the temperature in Celsius : "; //Output question
    cin >> cels; //Input Celsius
    fahr = cels * (9.0 / 5.0) + 32; //Fahrenheit formula
    cout << "The temperature in Celsius    : " << cels << endl; //Output final Celsius
    cout << "The temperature in Fahrenheit : " << fahr << endl; //Output final Fahrenheit
    return 0; //End of program
}