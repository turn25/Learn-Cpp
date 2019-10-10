//KT x<=y<=z dung hay ko
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
    if (x<=y&&y<=z)
        cout<<"Dung";
    else
        cout<<"Ko dung";
}