#include <iostream>

int countDigits(int number)
{
    // Handle the case for zero separately
    if (number == 0)
        return 1;

    // Handle negative numbers by taking the absolute value
    number = std::abs(number);

    int count = 0;

    // Count digits using a loop
    while (number > 0)
    {
        number /= 10;
        ++count;
    }

    return count;
}

int main()
{
    int number1, number2;

    // Input the two integers
    std::cout << "Enter the first integer: ";
    std::cin >> number1;
    std::cout << "Enter the second integer: ";
    std::cin >> number2;

    // Compute the sum
    int sum = number1 + number2;

    // Count the number of digits in the sum
    int digitCount = countDigits(sum);

    // Output the results
    std::cout << "The sum of the two integers is: " << sum << std::endl;
    std::cout << "The number of digits in the sum is: " << digitCount << std::endl;

    return 0;
}
