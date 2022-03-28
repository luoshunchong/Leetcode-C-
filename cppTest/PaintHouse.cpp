#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int PaintHose(int N, vector<vector<int>> & costs) {
    vector<vector<int>> dp(N, vector<int>(3));
    dp[0][0] = costs[0][0];
    dp[0][1] = costs[0][1];
    dp[0][2] = costs[0][2];
    for (int i = 1; i < N; ++i) {
        dp[i][0] = min(dp[i - 1][1] + costs[i][0], dp[i - 1][2] + costs[i][0]);
        dp[i][1] = min(dp[i - 1][0] + costs[i][1], dp[i - 1][2] + costs[i][1]);
        dp[i][2] = min(dp[i - 1][0] + costs[i][2], dp[i - 1][1] + costs[i][2]);
    }
    return min({dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]});

}

int main() {
    int N = 3;
    vector<vector<int>> costs = {{14, 2, 11}, {11, 14, 5}, {14, 3, 10}};
    int res = PaintHose(N, costs);
    cout << res << endl;

    return 0;
}