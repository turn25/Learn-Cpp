//Giai pt ax+b=0
#include <iostream>
#include <cmath>
using namespace std;
void PTBac1(float,float);
int main()
{
    float a,b;
    cin>>a>>b;
    PTBac1(a,b);
    return 0;
}
void PTBac1(float a,float b)
{
    float x;
    if(a==0)
    {
        if(b==0)
            cout<<"VSN";
        else
            cout<<"VN";
    }
    else
    {
        x=-b/a;
        cout<<x;
    }
}