// Nhập 5 số thực a, b , c , d , e . Tìm số lớn nhất
#include<iostream>
using namespace std ;
int main()
{
    int a[5], max = 0 , min ;
    for (int i = 0; i < 5; i++)
    {
        cout << "A[" << i + 1 << "] = ";
        cin >> a[i]; 
    }
    for (int  i = 0; i < 5; i++)
    {
        if(a[i] == a[i + 1])
        {
        cout << "\nKhong co gia tri lon nhat va nho nhat ";
        return 0 ;
        }
    }    
    for (int i = 0; i < 5; i++) if(max < a[i]) max = a[i];
    cout << "\nGia tri lon nhat la : " << max << endl ;  
    min = a[0] ;
    for (int i = 0; i < 5; i++) if(a[i] < min ) min = a[i] ;
    cout << "Gia tri nho nhat cua day la : " <<  min ;    
}