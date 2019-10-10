//Nhap 3 so thuc 0 am x,y,z.Cho biet la tam giac gi
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
    {
        if(x==y&&y==z)
            cout<<"Tam giac deu";
        else
        {
            if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==x*x+y*y)
            {
                if(x==y||y==z||x==z)
                    cout<<"Tam giac vuong can";
                else
                    cout<<"Tam giac vuong";
            }
            else
            {
                if(x==y||y==z||x==z)
                    cout<<"Tam giac can";
                else
                    cout<<"Tam giac thuong";
            }
        }
    }
    else
        cout<<"Ko la tam giac";
}