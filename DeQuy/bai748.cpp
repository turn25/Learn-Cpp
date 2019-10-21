// Tinh can2(2+can2(2+...+can2(2))) co n dau can
#include <iostream>
#include <cmath>
using namespace std;
float CanBac(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while (n<0);
    float kq=CanBac(n);
    cout<<"Tong la: "<<kq<<endl;
    return 0;
}
float CanBac(int n)
{
    if(n==0)
        return 0;
    float S=CanBac(int(n-1));
    return sqrt(2+S);
}