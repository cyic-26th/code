#include <bits/stdc++.h>
using namespace std;

// declare
int a, b, c;
bool check; // 紀錄是否有答案

int main(){
    // init
    check=0;

    // input
    cin >> a >> b >> c;

    // 把a、b換成1和0，方便後續的比對
    a=(bool)a;
    b=(bool)b;

    // output
    if (((a!=0 && b!=0) && c==1) || ((a==0 || b==0) && c==0)){
        cout << "AND" << endl;
        check=1; // 確定有答案，所以紀錄check
    }
    if (((a==0 && b==0) && c==0) || ((a!=0 || b!=0) && c==1)){
        cout << "OR" << endl;
        check=1; // 同上
    }
    if ((a==b && c==0) || (a!=b && c==1)){
        cout << "XOR" << endl;
        check=1; // 同上
    }

    // 如果沒有答案就做特別輸出
    if (check==0){
        cout << "IMPOSSIBLE" << endl;
    }



    return 0;
}