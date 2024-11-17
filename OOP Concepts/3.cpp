#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int classYear;
    int rollNumber;
    double marks;

public:
    Student(string studentName, int studentClass, int rollNo, double studentMarks)
        : name(studentName), classYear(studentClass), rollNumber(rollNo), marks(studentMarks) {}

    char calculateGrade()
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << classYear << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main()
{
    Student student("Meera", 11, 13, 90);
    student.display();
    return 0;
}
