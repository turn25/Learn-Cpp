//Cho 3 so thuc 0 am x,y,z.KT xem co ton tai 1 tam giac co do dai x,y,z
#include <iostream>
#include <cmath>
using namespace std;
void KT(float,float,float);
int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    KT(x,y,z);
    return 0;
}
void KT(float x,float y,float z)
{
    if(x<y+z&&y<x+z&&z<x+y)
        cout<<"TT";
    else
        cout<<"KO TT";
}