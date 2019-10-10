//Nhap 2 gia tri thuc a,b . Tim gia tri lon nhat
#include <iostream>
#include <cmath>
using namespace std;
float GTLN(float,float);
int main()
{
    float a,b;
    cin>>a>>b;
    float kq=GTLN(a,b);
    cout<<kq;
    return 0;
}
float GTLN(float a,float b)
{
    float sl=a;
    if (sl<b)
        sl=b;
    return sl;
}