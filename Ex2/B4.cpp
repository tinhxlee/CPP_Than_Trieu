// Nhập n tính 
// Sn = Tổng các số tự nhiên không lớn hơn n 
// S1 = Tổng các số tự nhiên lẻ không lớn hơn n
// S2 =  Tổng các số tự nhiên chẵn không lớn hơn n
#include<iostream>
using namespace std ;
int main()
{
    int n, Sn = 0, S1 = 0, S2 = 0 ;
    cout << "Nhap n = " ;
    cin >> n ;
    if(n >= 0)
    {
        for (int  i = 1; i <= n; i++)
        {
            Sn += i ;
            (i%2 != 0) ? (S1 +=i) : (S2 += i) ;
        }
        cout << "Tong so tu nhien nho hon " << n << " la Sn = " << Sn << endl ;
        cout << "Tong so tu nhien le  nho hon " << n << " la Sn = " << S1 << endl ;
        cout << "Tong so tu nhien chan nho hon " << n << " la Sn = " << S2 << endl ;   
    }
    else  cout << "So ban nhap khong hop le !!!";
}