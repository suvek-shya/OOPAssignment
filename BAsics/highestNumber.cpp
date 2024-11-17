#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numbers;
    int n, num;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> num;
        numbers.push_back(num);
    }

    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    std::cout << "The three highest numbers in descending order are:\n";
    for (int i = 0; i < 3 && i < numbers.size(); ++i)
    {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}
