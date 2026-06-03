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
  cout << "Enter the name of the stundent: \n";
  cin.ignore();
  cout << "> ";
  getline(cin, student_name);
  cout << "\n\n";

  cout << "How many subjects would you like to calculate? \n";
  cout <<"> ";
  cin >> subject_amount;
  cout << "\n\n";

  cout << "Enter the amount of credits for each subject: \n";
  for(int i=0; i<subject_amount; i++)
  {
    cout << "> ";
    cin >> gc_in;
    cout << "\n";
    if(gc_in > 6.0)
    {
      cerr << "> ERROR: Invalid Answer, returning to beginning of this segment...\n\n";
      this_thread::sleep_for(chrono::seconds(1));
      CalculateGPA();
    }
    credit.push_back(gc_in);
  }
  cout << "\n\n";

  cout << "Enter your student's grade for this subject (in a scale of 0-5): \n";
  for(int i=0; i<subject_amount; i++)
  {
    cout << "> ";
    cin >> gc_in;
    cout << "\n";
    if(gc_in > 5.0)
    {
      cerr << "> ERROR: Invalid Answer, returning to beginning of this segment...\n\n";
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

  cout << "> Your student's GPA is: "
       << gpa
       << "\n\n";
  this_thread::sleep_for(chrono::seconds(1));

  // Options post calculation
  int menu_input;
  cout << "> Select an option...\n\n";
  cout << "> 1. Calculate GPA once again\n";
  cout << "> 2. View method for calculating GPA\n";
  cout << "> 3. Go back to main menu\n";
  cout << "> 4. Exit the app\n";

  switch(menu_input)
  {
    case 1:
      cout << "> Redirecting to GPA Calculator...\n";
      this_thread::sleep_for(chrono::seconds(1));
      CalculateGPA();

    case 2:
      cout << "> Redirecting to GPA Method...\n";
      this_thread::sleep_for(chrono::seconds(1));
      // GPAMethod();

    case 3:
      cout << "> Going back to main menu...\n";
      this_thread::sleep_for(chrono::seconds(1));
      main();

    case 4:
      exit(EXIT_SUCCESS);

  }

};
