#include <iostream>
using namespace std;

void sumEvenOdd(int arr[], int n, int &evenSum, int &oddSum) {
    if (n <= 0)
        return;
    if (arr[n - 1] % 2 == 0)
        evenSum += arr[n - 1];
    else
        oddSum += arr[n - 1];
    sumEvenOdd(arr, n - 1, evenSum, oddSum);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenSum = 0, oddSum = 0;
    sumEvenOdd(arr, n, evenSum, oddSum);
    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;
    return 0;
}
