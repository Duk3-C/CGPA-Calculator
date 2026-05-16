#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student
{
    string student_name;
    string class_name;

    Student(string s_name, string c_name) : student_name(move(s_name)), class_name(move(c_name)) {};
};

int main()
{
    system("clear");

    vector<Student> studentInfo;
    string student_name;
    string class_name;

    cout << "==============================\n" <<
            "==     CGPA Calculator      ==\n" <<
            "==============================\n\n" <<
            "Enter the student's name: ";
    getline(cin, student_name);
    cout<<"\n";
    cout << "Enter the name of the class your student is currently enrolled in: ";
    getline(cin, class_name);
    
    studentInfo.emplace_back(student_name, class_name);

    /*
    DEBUG 
    
    for(const auto& student : studentInfo)
    {
        cout << student.student_name << student.class_name << "\n";
    }
    */

    return 0;

}