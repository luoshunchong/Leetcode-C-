#include<iostream>
#include<vector>

using namespace std;

void test_ZeroOne_bag_two_dimensional(vector<int> &weight, vector<int> &value, int bagsize) {
    /*
    dp[i][j] 表示从下标为[0-i]的物品里任意取，放进容量为j的背包，价值总和最大是多少
    */
    //初始化
    vector<vector<int>> dp(weight.size(), vector<int> (bagsize + 1, 0));//全部初始化为0就可以了
    for (int j = weight[0]; j <= bagsize; ++j) {
        dp[0][j] = value[0];
    }
    //不论先遍历物品还是背包都可以
    for (int i = 1;i < weight.size(); ++i) {  //遍历物品
        for (int j = 0; j <= bagsize; ++j) {  //遍历背包容量
            if (j < weight[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
        }
    }
    cout << "二维数组dp中背包所能装的最大价值总和是：" << dp[weight.size() - 1][bagsize] << endl;
}

void test_ZeroOne_bag_one_dimensional(vector<int> &weight, vector<int> &value, int bagsize) {
    /*
    dp[j]表示：容量为j的背包，所背的物品价值可以最大为dp[j]。
    */
   //初始化
   vector<int> dp(bagsize + 1, 0);  //全部初始化为0就可以了
   for (int i = 0; i < weight.size(); ++i) {  //遍历物品
       for (int j = bagsize; j >= weight[i]; --j) {  //遍历背包
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
       }
   }
   cout << "一维数组dp中背包所能装的最大价值总和是：" << dp[bagsize] << endl;
}

int main() {
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int bagsize = 4;
    //0-1背包
    //暴力解法（回溯法）
    
    //二维数组的情况
    test_ZeroOne_bag_two_dimensional(weight, value, bagsize);
    //一维数组情况
    test_ZeroOne_bag_one_dimensional(weight, value, bagsize);

    //完全背包

    system("pause");
    return 0;
}