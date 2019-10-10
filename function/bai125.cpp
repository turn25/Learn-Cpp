//Nhap 2 gia tri thuc a,b . Thay gia tri am = tri tuyet doi cua no
#include <iostream>
#include <cmath>
using namespace std;
void TriTuyetDoi(float,float);
int main()
{
    float a,b;
    cin>>a>>b;
    TriTuyetDoi(a,b);
    return 0;
}
void TriTuyetDoi(float a,float b)
{
    if(a<0)
        a=abs(a);
    if(b<0)
        b=abs(b);
    cout<<a<<" "<<b;
}