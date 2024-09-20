/*
Fibonacci Series 
            The Fibonacci Series is a classic example of dynamic programming. Instead of recalculating Finonacci numbers we store the results pof su
*/

#include <iostream>
using namespace std;

int fibonacci(int n, int dp[]) {
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    return dp[n];
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int dp[n + 1];
    fill_n(dp, n + 1, -1);
    cout << "Fibonacci number is " << fibonacci(n, dp) << endl;
    return 0;
}
