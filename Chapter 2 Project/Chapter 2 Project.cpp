// Chapter 2 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
//Initiating variables
    double current, sum1, sum2, sum3;

//Asking for and defining user input
    cout << "Whats the current level?: ";
    cin >> current;

//Calculating and printing out results
    sum1 = (1.5 * 5) + current;
    cout << "Ocean level after 5 years: " << sum1 << endl;

    sum2 = (1.5 * 7) + current;
    cout << "Ocean level after 7 years: " << sum2 << endl;

    sum3 = (1.5 * 10) + current;
    cout << "Ocean level after 10 years: " << sum3 << endl;
}

