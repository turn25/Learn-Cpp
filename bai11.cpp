// Tinh dien tich tam giac ABC voi 3 dinh A,B,C
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3,p,S;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;
    float AB=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    float BC=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    float AC=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    p=(AB+BC+AC)/2;
    S=sqrt((p-AB)*(p-BC)*(p-AC)*p);
    cout<<S;
    return 0;
}
