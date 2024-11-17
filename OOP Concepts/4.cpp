#include <iostream>
using namespace std;

class Triangle
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    void determineType()
    {
        if (side1 == side2 && side2 == side3)
            cout << "The triangle is Equilateral." << endl;
        else if (side1 == side2 || side1 == side3 || side2 == side3)
            cout << "The triangle is Isosceles." << endl;
        else
            cout << "The triangle is Scalene." << endl;
    }
};

int main()
{
    Triangle triangle(4, 4, 6);
    triangle.determineType();
    return 0;
}
