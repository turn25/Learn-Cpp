//KT x<=y<=z dung hay ko
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    if (x<=y&&y<=z)
        cout<<"Dung";
    else
        cout<<"Ko dung";
    return 0;
}