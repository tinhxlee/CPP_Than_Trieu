//Nhập số tự nhiên n và in ra các số chẵn nhỏ hơn n và các số lẻ nhỏ hơn n
#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "Nhap n = ";
    cin >> n ;
    for (int  i = 0; i < n; i++)
    {
        if( i % 2 == 0 ) cout << i << " ";
    }
    cout << endl ;
    for (int  i = 0; i < n; i++)
    {
        if(i%2 != 0) cout << i << " ";
    }   
}