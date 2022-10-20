#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
int getAnswer(string str) {
    int dp[100007] = {1};
    int n = str.length();
    for (int i = 1; i < n; i++) {
        if (str[i] - '0' > 0) {
            dp[i] = dp[i - 1];
        }
        int val = (str[i - 1] - '0') * 10 + (str[i] - '0');
        if (val >= 10 && val <= 26) {
            if (i < 2) {
                dp[i] += dp[0];
            } else {
                long answer = dp[i] + dp[i - 2];
                dp[i] = answer % M;
            }
        }
    }
    return dp[n - 1];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << getAnswer(str) << endl;
    }
    return 0;
}
