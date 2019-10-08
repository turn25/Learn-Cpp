//Cho 3 diem A,B,C .KT xem 3 dinh nay co la dinh cua 1 tam giac ko
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;
    float x=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    float y=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    float z=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    if(x<y+z&&y<x+z&&z<x+y)
        cout<<"La 3 dinh cua tam giac";
    else
        cout<<"KO la 3 dinh cua tam giac";
    return 0;
}