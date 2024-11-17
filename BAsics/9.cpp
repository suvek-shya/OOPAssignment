#include <iostream>
#include <ctime>
#include <cmath> // For abs()
using namespace std;

// Function to validate if a given date is valid
bool isValidDate(int year, int month, int day) {
    // Check month range
    if (month < 1 || month > 12) {
        return false;
    }

    // Check day range
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Leap year adjustment
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1]) {
        return false;
    }

    return true;
}

int daysBetween(int y1, int m1, int d1, int y2, int m2, int d2) {
    // Create tm structures for the dates
    tm date1 = {0, 0, 0, d1, m1 - 1, y1 - 1900};
    tm date2 = {0, 0, 0, d2, m2 - 1, y2 - 1900};

    // Convert tm structures to time_t
    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);

    // Calculate the difference in days
    int result = abs(difftime(time2, time1) / (60 * 60 * 24));
    return result;
}

int main() {
    int y1, m1, d1, y2, m2, d2;
    cout << "Enter two dates (YYYY MM DD): ";
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

    // Validate both input dates
    if (!isValidDate(y1, m1, d1) || !isValidDate(y2, m2, d2)) {
        cout << "One or both of the input dates are invalid." << endl;
        return 1; // Exit the program with an error code
    }

    // Output the number of days between the dates
    cout << "Days: " << daysBetween(y1, m1, d1, y2, m2, d2) << endl;
    return 0;
}
