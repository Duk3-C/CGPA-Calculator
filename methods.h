#include <iostream>
#include <stdlib.h>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

void CalculateSingleGPA()
{

  system("clear");

  int student_name;
  string subject_name;
  double credit;
  double grade;

  cout << "Enter the name of the stundent: ";
  cin >> student_name;
  cout << "\n\n";

  cout << "How many subjects would you like to calculate?\n";
  cin >> subject_amount;
  cout << "\n\n";

  cout << "Enter the amount of credits for each subject";
  cin >> credit;
  cout << "\n\n";

  cout << "Enter  your student's grade for this subject (in a scale of 0-5): ";
  cin >> grade;
  if(grade>5){ cout<<"Invalid Answer..."; main(); };
  cout << "\n\n";

  double gpa = grade*credit/credit;

};
