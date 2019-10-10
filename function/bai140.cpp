//Giai pt ax^2+bx+c=0 (a khac 0)
#include <iostream>
#include <cmath>
using namespace std;
void PTBac1(float,float,float);
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    PTBac1(a,b,c);
    return 0;
}
void PTBac1(float a,float b,float c)
{
    float delta=b*b-4*a*c;
    if(delta!=0)
    {
        if(delta>0)
        {
            float x1=(-b+sqrt(delta))/(2*a);
            float x2=(-b-sqrt(delta))/(2*a);
            cout<<"x1 = "<<x1<<", x2 = "<<x2;
        }
        else
            cout<<"VO nghiem";
    }
    else
    {
        float x=-b/(2*a);
        cout<<"pt co nghiem kep x1=x2= "<<x;
    }
}