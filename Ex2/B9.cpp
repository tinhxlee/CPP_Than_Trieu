//Viết chương trình C++ nhập số nguyên tùy ý từ bàn phím và kiểm tra số vừa nhập
//có phải số nguyên tố hay không.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Nhap n = ";
    cin >> n;
    if (n < 2) cout << "Day khong phai la so nguyen to !!!";
    else
    {
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << "Day khong phai la so nguyen to !!!";
                exit(0);
            }
            else
            {
                cout << "Day la so nguyen to !!!";
                exit(0);
            }
        }
    }
}