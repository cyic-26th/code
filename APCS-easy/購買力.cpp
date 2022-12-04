#include <bits/stdc++.h>
using namespace std;

// declare
int n, d;
int a, b, c;
int item=0, cost=0; // 物品數量，費用

int main(){
    // input
    cin >> n >> d;
    for (int i=0 ; i<n ; i++){
        cin >> a >> b >> c;

        if (max({a, b, c})-min({a, b, c})>=d){ // max, min的函式特別用法，如果有多個數字就要用{}包住所有數值，分別會回傳最大值跟最小值
            // 如果最大值與最小值的差大於"等於"d，就紀錄答案
            item++;
            cost+=(a+b+c)/3;
        }
    }

    // output
    cout << item << " " << cost << endl;
    return 0;
}