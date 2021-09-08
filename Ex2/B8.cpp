// Nhập 2 số nguyên dương, tìm UCLN và BCNN
#include<iostream>
using namespace std ;
int main()
{
    int a, b ;
    cout << "Nhap a = ";
    cin >> a ;
    cout << "Nhap b = ";
    cin >> b ;
    int tich = a*b ;
    while (a != b)
    {
        if(a > b ) a -= b ;
        else b -= a ;
    }
    cout << "UCLN la : " << a << endl;
    cout << "BCNN  la : " << tich/a ;   
}