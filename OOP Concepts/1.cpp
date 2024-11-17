#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID) : name(empName), employeeID(empID), salary(0) {}

    void setSalary(double performanceRating)
    {
        if (performanceRating >= 4.5)
            salary = 50000;
        else if (performanceRating >= 3.5)
            salary = 40000;
        else
            salary = 30000;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp("Suvekshya Thakuri", 55402);
    emp.setSalary(4.2);
    emp.display();
    return 0;
}
