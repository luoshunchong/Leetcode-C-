#include <iostream>
#include <unordered_map>
// #include <utility>
#include <unordered_set>
#include <vector>
using namespace std;

// int test(int num) {
//     for (int i = 0; i < num; ++i) {
//         if (i == 1) return i;
//     }
//     return -1;
// }
int sum = 0;
int digui(int num) {
    if (num == 0) return 0;
    sum += num;
    digui(num - 1);
    return sum;
}

int main()
{
    // int a = 10;
    // int b = 20;
    // int &c = a; //相当于个a去了一个别名，a的别名是c，a与c的地址实际上是一样的。
    // c = b;
    // cout << c << endl;
    // cout << &c << &a << endl; //取地址的方法

    // unordered_map<int,int> ma;
    // ma.insert(make_pair(2,3));
    // int t = ma[2];
    // cout<<t<<endl;

    // int t = test(3);
    // cout << t << endl;

    // int a = 2 & 1;
    // cout << a << endl;

    // char a = 'B' - '0';
    // cout << a << endl;
    
    // bool flag = true;
    // for (int i = 0; i < 3; ++i) {
    //     cout << i << endl;
    //     if (i == 2 && flag) {
    //         i = 0;
    //         flag = false;
    //     }
    // }

    // unordered_set<int> t;
    // unordered_set<pair<int, int> > t1;
    // unordered_set<vector<int> > t2;

    // vector<vector<bool>> used(101, vector<bool> (101, false));

    // int a = 2, b = 3;
    // swap(a, b);
    // cout << a << endl;
    // cout << b << endl;

    int num = 3;
    int res = digui(num);
    cout << res << endl;


    // system("pause");
    return 0;
}
