#include <bits/stdc++.h>
using namespace std;

int dp[20][20];  // dp[i][j] 表示栈外还有i个数，栈内有j个数

int main() {
    int n;
    cin >> n;
    
    dp[0][0] = 1;
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i > 0) {  // 栈外有数，可以入栈
                dp[i][j] += dp[i-1][j+1];
            }
            if (j > 0) {  // 栈内有数，可以出栈
                dp[i][j] += dp[i][j-1];
            }
        }
    }
    
    cout << dp[n][0] << endl;
    return 0;
}