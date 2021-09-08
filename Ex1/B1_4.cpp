// Nhập 2 số tùy ý -> so sánh 2 số 
#include<iostream>
using namespace std ;
int main()
{
    int a, b ;
    cout << "Nhap a = ";
    cin >> a ;
    cout << "Nhap b = ";
    cin >> b ;
    if(a>b) cout << a << " > " << b ;
    else if(a == b) cout << a << " = " << b ;
    else cout << a << " < " << b ;
}