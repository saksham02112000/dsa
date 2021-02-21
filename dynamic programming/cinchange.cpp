#include<bits/stdc++.h>
using namespace std;
int coinchange(int total)
{
    if(total==0)
    {
        return 0;
    }
    else
    {
        return 1+coinchange(total-1) || 1+coinchange(total-2) || 1+coinchange(total-3);
    }
}

int main()
{
    int n;
    cin>>n;
    int m=coinchange(n);
    cout<<m;
    return 0;
}