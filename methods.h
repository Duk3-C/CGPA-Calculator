#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

void CalculateCGPA()
{
  
  double input;
  int amount_of_subjects;
  vector<double> student_grades;
  vector<double> subject_credits;

  cout << "----  CGPA  ----\n\n";
  cout << "Enter the student's total number of subjects taken: \n"
       << "Maximum number of subjects is 8.\n"
       << "Enter amount: ";
  cin >> amount_of_subjects;
  if (amount_of_subjects > 8)
    {
      cout << "Please enter a valid amount inside the range given.\n\n";
      CalculateCGPA();
    }

  cout << "\n\n\n";

  cout << "Enter the grades on each subject (Max amount should be 100): ";
  for (amount_of_subjects)
  {
    cin >> input;
    if (input > 100)
    {
      cout << "Wrong Answer...\n\n";
      CalculateCGPA();
    }
    student_grades.push_back(input);
  }
  // Debugging
  for (double grades : student_grades)
  {
    cout << grades;
  }
  cout << "\n\n";

  cout << "Enter amount of credits given by each subject: ";
  cin >> input;
  for (input)
  {
    if (input > 2)
    {
      cout << "Wrong Answer...\n\n";
      CalculateCGPA();
    }
    
  }

};

void CGPAMethod()
{

};

