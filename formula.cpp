#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  int classes;
  vector<double> credits;
  vector<double> grades;

  cout << "Enter number of classes (min of 4 - max of 8): ";
  cin >> classes;
  if (classes > 8) 
  {
    cerr << "Invalid Answer\n";
    return 1;
  }
  cout << "\n\n";

  cout << "Enter credits for each class: \n";
  for(int i = 0; i < classes; i++) 
  {
    double in;
    cin >> in;
    
    if(in > 2)
    {
      cerr << "Invalid Answer\n\n";
      return 1;
    }

    credits.push_back(in);
  }

  // Rusty Debugging method to check how the vectors work
  /*for(double c : credits) 
  {
    cout << c << " ";
  }*/

  cout << "\n\n";

  cout << "Enter grades for each class: \n";
  for(int i = 0; i < classes; i++)
  {
    double in;
    cin >> in;

    if(in > 100)
    {
      cerr << "Invalid Answer\n\n";
      return 1;
    }

    grades.push_back(in);
  }

  cout << "\n\n";

  // Rusty Debugging method to check how the vectors work
  /*for(double g : grades)
  {
    cout << g << " ";
  }*/

  /*
  double total_credit_points = accumulate(credits.begin(), credits.end(), 0.0);
  cout << "Total credit points: " << total_credit_points;
  cout << "\n";
  double total_grade_points = accumulate(grades.begin(), grades.end(), 0.0);
  cout << "Total grade points: " << total_grade_points;
  */

  double total_class_product = 0.0
  for (i = 0; i < credits.size(); i++)
  {
    total_class_product = grades[i] * credits[i];
  }

  return 0;

}
