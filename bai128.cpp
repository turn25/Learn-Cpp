//Nhap 2 gia tri thuc a,b . Xep theo thu tu tang dan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    if (a>b)
    {
        float c=a;
        a=b;
        b=c;
    }
    cout<<a<<" "<<b;
    return 0;
}