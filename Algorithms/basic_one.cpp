#include <iostream>
using namespace std;

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0) {  // Base case
        return 1;
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
