//Nhập số tự nhiên n và thực hiện 
// In ra các ước số của n
// In ra số ước của n 
#include<iostream>
using namespace std ;
int main()
{
    int n , count = 0 ;
    cout << "Nhap n = ";
    cin >> n ;
    if(n < 0 ) cout << "Vui long nhap gia tri n > 0 !!!";
    else
    {
        cout << "Uoc cua " << n << " la : ";
        for (int  i = 1; i <= n; i++)
        {
            if(n % i == 0) 
            {
            cout << i << " ";
            count ++ ;
            }
        }
        cout << endl << n << " co so uoc la : " << count ;
    }
}