// Nhập 2 số tự nhiên n,k , in ra tổng các số nhỏ hơn n và chia hết cho k
#include<iostream>
using namespace std ;
int main()
{
    int n, k, sum = 0 ;
    cout << "Nhap n = ";
    cin >> n ;
    cout << "Nhap k = ";
    cin >> k ;
    if(n > 0 && k > 0)
    {
        for (int  i = 0; i < n; i++)
      {
        if(i % k == 0) sum += i ;
      } 
    cout << "Tong cac so nho hon " << n << " va chia het cho " << k << " la : " << sum ;  
    }
    else cout << "So ban nhap khong hop le !!!";
}