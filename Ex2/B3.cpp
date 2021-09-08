// Nhập số tự nhiên n rồi tính tổng 1/1 + ... + 1/n
#include<iostream>
using namespace std ;
int main()
{
    int n ; float sum = 0.0 ;
    cout << "Nhap n = "; cin >> n ;
    if(n >= 0){
    for (int  i = 1; i <= n; i++) sum += 1.0/i ;
    cout << sum ;
    }
    else cout << "So ban nhap phai lon hon 0 ";   
}