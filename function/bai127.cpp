//Nhap 2 gia tri thuc a,b . Tim gia tri nho nhat
#include <iostream>
#include <cmath>
using namespace std;
float GTNN(float,float);
int main()
{
    float a,b;
    cin>>a>>b;
    float kq=GTNN(a,b);
    cout<<kq;
    return 0;
}
float GTNN(float a,float b)
{
    float sl=a;
    if (sl>b)
        sl=b;
    return sl;
}