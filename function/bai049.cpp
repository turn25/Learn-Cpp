// Liet ke tat ca uoc so cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
void LietKe(int);
int main()
{
    int n;
    cin>>n;
    LietKe(n);
    return 0;
}
void LietKe(int n)
{
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
            cout<<i<<" ";
        i++;
    }
}
