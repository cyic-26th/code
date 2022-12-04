#include <bits/stdc++.h>
using namespace std;

// declare
int n;
int arr[30];
int A=-1, B=101;
// A紀錄最高不及格分數，B紀錄最低及格分數
// 如果A沒有值的話，則是-1，B同理

int main(){
    // input
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];

        if (arr[i]<60){
            A=max(A, arr[i]);
        }else{
            B=min(B, arr[i]);
        }
    }

    // sort
    // 這是內建函式的用法，需要放入兩個值：陣列的開頭，陣列的結尾+1 [L, R)，這樣就可以陣列裡[L, R)的值以小到大排序
    sort(arr, arr+n);
    
    // 你也可以用下面的寫法：氣泡排序
    /*
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<i ; j++){
            if (arr[j]>arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
    */

    // output
    for (int i=0 ; i<n ; i++) cout << arr[i] << " ";
    cout << endl;

    if (A>=0) cout << A << endl;
    else cout << "best case" << endl;
    
    if (B<=100) cout << B << endl;
    else cout << "worst case" << endl;

    

    return 0;
}