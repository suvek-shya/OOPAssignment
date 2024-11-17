#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    bool isValidDate()
    {
        if (month < 1 || month > 12 || day < 1 || day > 31)
            return false;
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;
        if (month == 2)
        {
            bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (day > (leap ? 29 : 28))
                return false;
        }
        return true;
    }

    void display()
    {
        if (isValidDate())
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        else
            cout << "Invalid Date!" << endl;
    }
};

int main()
{
    Date date;
    date.setDate(20, 2, 2023);
    date.display();
    return 0;
}
