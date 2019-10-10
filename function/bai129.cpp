//Nhap 3 gia tri thuc a,b,c . Xep theo thu tu tang dan
#include <iostream>
#include <cmath>
using namespace std;
void TangDan(float,float,float);
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    TangDan(a,b,c);
    return 0;
}
void TangDan(float a,float b,float c)
{
    if (a>b)
    {
        float d=a;
        a=b;
        b=d;
    }
    if (a>c)
    {
        float d=a;
        a=c;
        c=d;
    }
    if (b>c)
    {
        float d=b;
        b=c;
        c=d;
    }
    cout<<a<<" "<<b<<" "<<c;
}