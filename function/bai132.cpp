//KT diem M co thuoc tam giac hay ko
#include <iostream>
#include <cmath>
using namespace std;
void KT(float,float,float,float,float,float,float,float);
int main()
{
    float xA,yA,xB,yB,xC,yC,xM,yM;
    cin>>xA>>yA>>xB>>yB>>xC>>yC>>xM>>yM;
    KT(xA,yA,xB,yB,xC,yC,xM,yM);
    return 0;
}
void KT(float xA,float yA,float xB,float yB,float xC,float yC,float xM,float yM)
{
    float SABC=(float)1/2*abs(xA*yB+xB*yC+xC*yA-xB*yA-xC*yB-xA*yC);
    float SMAB=(float)1/2*abs(xM*yA+xA*yB+xB*yM-xA*yM-xB*yA-xM*yB);
    float SMCA=(float)1/2*abs(xM*yC+xC*yA+xA*yM-xC*yM-xA*yC-xM*yA);
    float SMBC=(float)1/2*abs(xM*yB+xB*yC+xC*yM-xB*yM-xC*yB-xM*yC);
    if (SABC==SMAB+SMCA+SMBC)
        cout<<"M thuoc tam giac";
    else
        cout<<"M ko thuoc tam giac";
}