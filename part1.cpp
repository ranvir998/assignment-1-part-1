// This code contains some syntax and calculation errors
// Correct the errors in this code
//in your push and commit comments, be sure to explain your corrections made.

//This program converts a temperature in degrees Fahrenheit
//to a temperature in degrees Celsius
//inputs may be decimals

#include <iostream>
using namespace std;

int main()
{
    double degreesF;
    double degreesC;

    cout << "Enter your temperature in degrees Fahrenheit:" << endl;
    cin >> degreesF;

    //convert from Fahrenheit to Celsius
    degreesC = ((degreesF-32)*5)/9;


    cout << degreesF << " degrees Fahrenheit equals "
    << degreesC << " degrees Celsius." << endl;

    return 0;

}
