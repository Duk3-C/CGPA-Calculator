#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

struct Student
{
    string student_name;
    string class_name;

    Student(string s_name, string c_name) : student_name(move(s_name)), class_name(move(c_name)) {};
};

struct Semester
{
    double class_credits;
    double class_grades;

    Semester(double c_credits, double c_grades) : class_credits(c_credits), class_grades(c_grades) {};
};

int main()
{
    system("clear");

    vector<Student> studentInfo;
    vector<Semester> class_data;
    string student_name;
    string class_name;
    double class_credits;
    double class_grades;

    cout << "==============================\n" <<
            "==     CGPA Calculator      ==\n" <<
            "==============================\n\n" <<
            "Enter the student's name: ";
    getline(cin, student_name);
    cout<<"\n";
    cout << "Enter the name of the class your student is currently enrolled in: ";
    getline(cin, class_name);
    cout << "\n";

    studentInfo.emplace_back(student_name, class_name);

    cout<<"Enter how many credits are given by your class: ";
    cin >> class_credits;
    cout << "\n\n";
    class_data.emplace_back(class_credits);

    cout << "Enter your student's grades in each semester: ";
    for(int i=0; i < 4; i++)
    {
        cin >> class_grades;
        class_data.emplace_back(class_grades);
    }

    /*DEBUG for class_data vector*/
    for(const auto& classs : class_data)
    {
        cout << classs.class_credits << " " << classs.class_grades << "\n";
    }
    /*
    DEBUG for studentInfo vector
    
    for(const auto& student : studentInfo)
    {
        cout << student.student_name << " " << student.class_name << "\n";
    }
    */

    return 0;

}