// Viết ct cho phép người dùng nhập số nguyên n. Hãy cho biết số vừa nhập : 
// Là số chẵn hay lẻ
// Là số âm hay dương 
#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "Nhap n = ";
    cin >> n ;
    if(n%2==0) cout << n << " la so chan !!!";
    else cout << n << " la so le !!!";
    cout << endl ;
    if(n < 0) cout << n << " la so am !!!";
    else cout << n << " la so duong ";
}