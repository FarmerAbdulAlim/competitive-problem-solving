#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i) {
            cin >> b[i];
        }

        vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));

        for (int i = 1; i <= n; ++i) {
            long long sum = 0;
            multiset<long long> segments;

            for (int j = 1; j <= k; ++j) {
                sum += abs(b[i] - a[i]);
                segments.insert(abs(b[i] - a[i]));

                if (segments.size() > j) {
                    sum -= *segments.begin();
                    segments.erase(segments.begin());
                }

                dp[i][j] = sum;
            }
        }

        long long maxSum = 0;
        for (int i = 1; i <= k; ++i) {
            maxSum = max(maxSum, dp[n][i]);
        }

        cout << maxSum << endl;
    }

    return 0;
}
