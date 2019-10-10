//Nhap 2 gia tri thuc a,b . Xep theo thu tu tang dan
#include <iostream>
#include <cmath>
using namespace std;
void TangDan(float,float);
int main()
{
    float a,b;
    cin>>a>>b;
    TangDan(a,b);
    return 0;
}
void TangDan(float a,float b)
{
    if (a>b)
    {
        float c=a;
        a=b;
        b=c;
    }
    cout<<a<<" "<<b;
}