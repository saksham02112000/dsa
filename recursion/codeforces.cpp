#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rec(int a,int b)
{
    if(a<=0)
    {
        return 1;
    }
    return min(rec(floor(a/b),b)+1,rec(a,b+1)+1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c=rec(a,b);
    cout<<c<<endl;
    return 0;
}