// Simple CGPA Calculator Project created in C++. Made use of simple algorithms and OOP.
// Project is fully open to anybody and any inquiries or advices you wanna leave are wellcome.

#include <iostream>
#include <stdlib.h>
#include "methods.h"

using namespace std;

void CalculateCGPA();
void CGPAMethod();

int input;

int main()
{

    system("cls");
    system("clear");

    cout << "================================================\n" <<
            "                 CGPA Calculator                \n" <<
            "================================================\n\n";

    cout << "> What would you like to do?\n\n";
    cout << "> 1. Calculate Cumulative Grade Point Average (CGPA)\n";
    cout << "> 2. View method used for calculating CGPA\n";
    cout << "> 3. Quit program\n\n";
    
    cout << "> Enter your choice: ";
    cin >> input;
    
    switch(input)
    {
      case 1:
        CalculateCGPA();
        break;
      case 2:
        CGPAMethod();
        break;
      case 3:
        exit(EXIT_SUCCESS);
        break;
      default:
        cout << "Invalid input. Please enter either 1, 2, or 3.\n\n";
        break;
    }
}
