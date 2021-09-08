// Nhập số tự nhiên n sau đó tính tổng  : S = 1 + 2 = 3 +... + n ;
#include<iostream>
using namespace std ;
int main()
{
    int n,t = 0 ;
    cout << " Nhap n = ";
    cin >> n ;
    for (int  i = 1; i <= n; i++) t += i ;
    cout << t ;
}