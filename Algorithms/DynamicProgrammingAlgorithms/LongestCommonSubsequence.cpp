/*
Longest Common Subsequence :- 
            The LCS problem is another example of where dynamic programming is used to find the longest subsequnce present in both sequences
*/

#include <iostream>
#include <vector>
using namespace std;

int lcs(string X, string Y, int m, int n) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}

int main() {
    string X = "AGGTAB";
    string Y = "GXTXAYB";
    int m = X.length();
    int n = Y.length();
    cout << "Length of LCS is " << lcs(X, Y, m, n) << endl;
    return 0;
}
