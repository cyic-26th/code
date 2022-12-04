#include <bits/stdc++.h>
using namespace std;

// declare
int a, b;
int n;
int x;
int take[105][105]; // 用二維陣列紀錄答案，take[i][j]代表第i個人拿j物品的數量（ex: take[3][7]=2代表第3個人拿了第7個物品2次）

int main(){
    // input
    cin >> a >> b >> n;

    // take item
    for (int i=0 ; i<n ; i++){
        while (cin >> x && x!=0){ // 持續輸入數值，如果數值為0則停止

            if (x<0){
                take[i][-x]--; // 如果輸入的值為負數則將take的值-1（注意：因為輸入的值為負數，作為index記得轉正）
            }else{
                take[i][x]++; // 反之
            }
        }
    }

    // count answer
    int s=0;
    for (int i=0 ; i<n ; i++){
        if (take[i][a]>0 && take[i][b]>0) s++; // 比對取物品的數量，如果a和b都有拿取的話則把答案+1
    }

    // output
    cout << s << endl;
    return 0;
}