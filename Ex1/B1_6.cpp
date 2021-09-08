#include<iostream>
using namespace std ;

int main()
{
    int width , length ;
    cout << "Enter width : ";
    cin >> width ;
    cout << "Enter length : ";
    cin >> length ;
    cout << "Dien tich hinh chu nhat la : " << width * length << endl ;
    cout << "Chu vi hinh chu nhat la : " << 2*(width+length) << endl ;
}