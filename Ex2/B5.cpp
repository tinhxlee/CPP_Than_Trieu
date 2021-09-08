// Nhập số nguyên dương và tính : 1 + 1*2 + 1 * 2 * 3 + .... +1 * 2 * 3 ... * n
#include<iostream>
using namespace std ;
int main()
{
    int n, x = 1, sum = 0 ;
    cout << "Nhap n = " ;
    cin >> n ;
    if(n >= 0) 
    {
    for (int  i = 1; i <= n; i++)
    {
        x *= i ; // Tính i!
        sum += x ;// Cộng các i! lại
    }
    cout << "Tong tich tang dan cua cac so nho hon n la : S = " <<  sum ;
    }
    else cout << "Can nhap so lon hon 0 " ;   
}