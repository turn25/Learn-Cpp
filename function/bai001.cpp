// Tinh khoang cach giua 2 diem
#include <iostream>
#include <math.h>
using namespace std;
float KhoangCach(float,float,float,float);
int main()
{
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    float kq=KhoangCach(x1,y1,x2,y2);
    cout<<kq;
    return 0;
}
float KhoangCach(float x1,float y1,float x2,float y2)
{
    float d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}