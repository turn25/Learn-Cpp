// S=1^3+2^3+...+n^3
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long S=0;
    int i=1;
    while(i<=n)
    {
        S=S+(i*i*i);
        i++;
    }
    cout<<S;
    return 0;
}
