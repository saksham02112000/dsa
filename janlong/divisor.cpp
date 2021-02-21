#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=10;i>=1;i--)
    {
        if(n%i==0)
        break;
    }
    cout<<i;
    return 0;
}