//Giai pt ax+b=0
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,x;
    cin>>a>>b;
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
    return 0;
}