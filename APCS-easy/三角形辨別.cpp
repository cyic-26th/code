#include <bits/stdc++.h>
using namespace std;

// declare
int a, b, c;

int main(){
    // input
    cin >> a >> b >> c;

    // sort a<b<c
    // 這裡是簡單的排序，叫做氣泡排序，可以自己思考看看為什麼這樣可以排序成功
    if (b>c) swap(b, c);
    if (a>b) swap(a, b);
    if (b>c) swap(b, c);

    // output
    cout << a << " " << b << " " << c << endl;
    if (a+b<=c){
        cout << "No" << endl;
    }else if (a*a+b*b<c*c){ // 這裡請注意，如果想要用畢氏定理sqrt(a*a+b*b)=c，是極度不建議的，因為會有浮點數誤差
        cout << "Obtuse" << endl;
    }else if (a*a+b*b==c*c){ // 同上
        cout << "Right" << endl;
    }else if (a*a+b*b>c*c){ // 同上
        cout << "Acute" << endl;
    }

    return 0;
}