// Tinh chu vi tam giac ABC voi 3 dinh A,B,C
#include <iostream>
#include <math.h>
using namespace std;
float ChuVi(float,float,float,float,float,float);
int main()
{
    float x1,y1,x2,y2,x3,y3;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;
    float kq=ChuVi(x1,y1,x2,y2,x3,y3);
    cout<<kq;
    return 0;
}
float ChuVi(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float AB=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    float BC=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    float AC=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    float P=AB+BC+AC;
    return P;
}