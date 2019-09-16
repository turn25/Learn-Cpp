// Tinh khoang cach giua 2 diem
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2,d;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<d;
    return 0;
}
