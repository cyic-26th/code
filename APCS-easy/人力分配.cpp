#include <bits/stdc++.h>
using namespace std;

// declare
int a1, b1, c1;
int a2, b2, c2;
int y1_, y2_;
int n;
int ma=-999999; // 請記住最大值得初始化，由於答案有可能是負數，所以記得放小一點

int main(){
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cin >> n;

    // 枚舉所有的可能的員工數量，i為題目中的X1，而(n-i)為題目中的X2
    for (int i=0 ; i<=n ; i++){
        y1_=a1*i*i + b1*i + c1;
        y2_=a2*(n-i)*(n-i) + b2*(n-i) + c2;

        ma=max(ma, y1_+y2_); // 紀錄最大值，也就是Y1+Y2
        // 這個寫法很常出現，代表不斷獲得最大值
    }

    cout << ma << endl;
    return 0;
}
