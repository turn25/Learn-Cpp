// Tinh can2(1 + can2(2 + ... + can2(n))) co n dau can
#include <iostream>
#include <cmath>
using namespace std;
float CanBac(int,int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while (n<0);
    int i=1;
    float kq=CanBac(n,i);
    cout<<"Tong la: "<<kq<<endl;
    return 0;
}
float CanBac(int n,int i)
{
    if(n==i)
        return sqrt(n);
    return sqrt(i+CanBac(n,i+1));
}