#include <bits/stdc++.h>
using namespace std;

// declare
string s; // 記得用string儲存，因為題目說了數字的位數最高到1000
int a, b; 
// a和b儲存奇數位數或偶數位數的總和，請注意，因為最後答案是取絕對值
// 所以哪個是奇數位數哪個是偶數位數對答案不影響

int main(){
    // init
    a=0;
    b=0;

    // input
    cin >> s;

    // count
    for (int i=0 ; i<s.size() ; i++){
        if (i%2==0){
            a+=s[i]-'0'; 
            // 特殊的用法，因為s[i]實際上是字元'0'~'9'，也就是數字48~57（字元的ascii碼）
            // 透過減去'0'（數字48），就可以讓數字範圍變成0~9
            
            // char    | '0' | '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9' |
            // ascii   |  48 |  49 |  50 |  51 |  52 |  53 |  54 |  55 |  56 |  57 |
            // 減去'0'  =============================================================
            // number  |   0 |   1 |   2 |   3 |   4 |   5 |   6  |  7 |   8 |   9 |
        }else{
            b+=s[i]-'0';
        }
    }

    // output
    cout << abs(a-b) << endl;

    return 0;
}