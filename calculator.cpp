// Simple CGPA Calculator Project created in C++. Made use of simple algorithms and OOP.
// Project is fully open to anybody and any inquiries or advices you wanna leave are wellcome.
#include <stdlib.h>
#include <numeric>
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

void CalculateGPA();
void CalculateSGPA();
void CalculateCGPA();
void GPAMethod();
void SGPAMethod();
void CGPAMethod();

int input;

int main()
{

    system("cls");
    system("clear");

    cout << "================================================\n" <<
            "                 GPA Calculator                \n" <<
            "================================================\n\n";

    cout << "> What would you like to do?\n\n";
    cout << "> 1. Calculate Grade Point Average (GPA)\n";
    cout << "> 2. Calculate Semester Grade Point Average (SGPA)\n";
    cout << "> 3. Calculate Cumulative Grade Point Average (CGPA)\n";
    cout << "> 4. View method used for calculating GPA\n";
    cout << "> 5. View method used for calculating SGPA\n";
    cout << "> 6. View method used for calculating CGPA\n";    
    cout << "> 7. Quit program\n\n";
    
    cout << "> Enter your choice: ";
    cin >> input;
    
    switch(input)
    {
      case 1:
        CalculateGPA();
        break;
      /* case 2:
        CalculateSGPA();
        break;
      case 3:
        CalculateCGPA();
        break;
      case 4:
        GPAMethod();
        break;
      case 5:
        SGPAMethod();
        break;
      case 6:
        CGPAMethod();
        break;
      */
      case 7:
        exit(EXIT_SUCCESS);
        break;
      default:
        cout << "Invalid input. Please enter either option.\n\n";
        main();
        break;
    }
}

void CalculateGPA()
{

  system("clear");

  string student_name;
  int subject_amount;
  string subject_name;
  vector<double> credit;
  vector<double> grade;
  double gc_in;

  cout << "======== GPA CALCULATOR ==========\n\n";
  cout << "Enter the name of the stundent: ";
  cin.ignore();
  getline(cin, student_name);
  cout << "\n\n";

  cout << "How many subjects would you like to calculate? ";
  cin >> subject_amount;
  cout << "\n\n";

  cout << "Enter the amount of credits for each subject: ";
  for(int i=0; i<subject_amount; i++)
  {
    cin >> gc_in;
    if(gc_in > 6.0)
    {
      cerr << "Invalid Answer, returning to beginning of this segment...\n\n";
      this_thread::sleep_for(chrono::seconds(1));

    }
    credit.push_back(gc_in);
    CalculateGPA();
  }
  cout << "\n\n";

  cout << "Enter  your student's grade for this subject (in a scale of 0-5): ";
  for(int i=0; i<subject_amount; i++)
  {
    cin >> gc_in;
    if(gc_in > 5.0)
    {
      cerr << "Invalid Answer, returning to beginning of this segment...\n\n";
      this_thread::sleep_for(chrono::seconds(1));
      CalculateGPA();
    }
    grade.push_back(gc_in);
  }

  double total_grade = 0.0;
  for(int j=0; j<credit.size(); j++)
  {
    total_grade += grade[j] * credit[j];
  }

  double total_credits = accumulate(credit.begin(), credit.end(), 0);
  double gpa = total_grade / total_credits;

  cout << "Your student's GPA is: "
       << gpa
       << "\n";

};
