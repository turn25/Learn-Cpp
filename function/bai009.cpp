// Tinh dien tich da giac deu n canh noi tiep duong tron ban kinh r
#include <iostream>
#include <math.h>
using namespace std;
float DienTich(int,float);
int main()
{
    int n;
    cin>>n;
    float r;
    cin>>r;
    float kq=DienTich(n,r);
    cout<<kq;
    return 0;
}
float DienTich(int n,float r)
{
    double S=n*r*r*sin(2*M_PI/n)/2;
    return S;
}