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
void CalculateCGPA();
void Method();

int input;

int main()
{

    system("cls");
    system("clear");

    cout << "================================================\n" <<
            "                 GPA/CGPA Calculator                \n" <<
            "================================================\n\n";

    cout << "> What would you like to do?\n\n";
    cout << "> 1. Calculate Grade Point Average (GPA)\n";
    cout << "> 2. Calculate Cumulative Grade Point Average (CGPA)\n";
    cout << "> 3. View method used for calculating this results\n";
    cout << "> 4. Quit program\n\n";
    
    cout << "> Enter your choice: ";
    cin >> input;
    
    switch(input)
    {
      case 1:
        CalculateGPA();
        break;
      case 2:
        CalculateCGPA();
        break;
      case 3:
        Method();
        break;
      case 4:
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
  vector<double> credit;
  vector<double> grade;
  double gc_in;     // grade-credit_input; just in case I forget

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
  cin >> menu_input;

  switch(menu_input)
  {
    case 1:
      cout << "> Redirecting to GPA Calculator...\n";
      this_thread::sleep_for(chrono::seconds(1));
      CalculateGPA();

    case 2:
      cout << "> Redirecting to GPA Method...\n";
      this_thread::sleep_for(chrono::seconds(1));
      Method();

    case 3:
      cout << "> Going back to main menu...\n";
      this_thread::sleep_for(chrono::seconds(1));
      main();

    case 4:
      exit(EXIT_SUCCESS);
  }

};

void CalculateCGPA()
{

  system("clear");

  int subject_amount;
  vector<double> credits;
  vector<double> grades;
  string student_name;
  double gc_in;

  cout << "========= CGPA Calculator ============";
  cout << "\n\n > Enter your student's name:\n";
  cout << "> ";
  cin >> student_name;
  cout << "\n\n > Enter the amount of subjects you want to calculate: \n";
  cout << "> ";
  cin >> subject_amount;

  cout << "\n\n> On a 5-point scale, enter the grades for each subject your student has: \n";
  for(int i=0; i<subject_amount; i++)
  {
    cout << "> ";
    cin >> gc_in;
    if(gc_in > 5.0) 
    {
      cerr << "> Invalid Answer; returning to CGPA Calculator...\n\n";
      this_thread::sleep_for(chrono::seconds(1));
      CalculateCGPA();
    }
    cout << "\n";

    grades.push_back(gc_in);
  }

  cout << "\n> Enter the amount of credits given by each subject:\n";
  for(int j=0; j<subject_amount; j++)
  {
    cout << "> ";
    cin >> gc_in;
    if(gc_in > 6.0)
    {
      cerr << "> Invalid Answer; returning to CGPA Calculator...\n\n";
      this_thread::sleep_for(chrono::seconds(1));
      CalculateCGPA;
    }
    cout << "\n";

    credits.push_back(gc_in);
  }

  vector<double> weighted_gp;
  for(int k=0; k<credits.size(); k++)
  {
    weighted_gp.push_back(grades[k] * credits[k]);
  }

  double total_wgp = accumulate(weighted_gp.begin(), weighted_gp.end(), 0);
  double total_cred = accumulate(credits.begin(), credits.end(), 0);

  double cgpa = total_wgp / total_cred;

  cout << "> Your student's CGPA is: " 
       << cgpa;
  cout << "\n\n";
  
  // Options post calculating
  int menu_input;
  cout << "> Select an option...\n\n";
  cout << "> 1. Calculate CGPA once again\n";
  cout << "> 2. View method for calculating CGPA\n";
  cout << "> 3. Go back to main menu\n";
  cout << "> 4. Exit the app\n";
  cin >> menu_input;

  switch(menu_input)
  {
    case 1:
      cout << "> Redirecting to CGPA Calculator...\n";
      this_thread::sleep_for(chrono::seconds(1));
      CalculateGPA();

    case 2:
      cout << "> Redirecting to CGPA Method...\n";
      this_thread::sleep_for(chrono::seconds(1));
      Method();

    case 3:
      cout << "> Going back to main menu...\n";
      this_thread::sleep_for(chrono::seconds(1));
      main();

    case 4:
      exit(EXIT_SUCCESS);
  }

};

void Method()
{

  system("clear");

  cout << " ======================= GPA/CGPA Method ===========================\n";
  cout << "| > GPA = Total Quality Points divided by the Total of Credit Hours |\n"
       << "| > Step by Step:                                                   |\n"
       << "| >    1. Multiply each grade point  value by the number of credits |\n"
       << "| >    2. Add up all the grade points                               |\n"
       << "| >    3. Add up all the credit hours                               |\n"
       << "| >    4. Divide the total grade points by the total credits        |\n"
       << " ===================================================================\n\n";

};

