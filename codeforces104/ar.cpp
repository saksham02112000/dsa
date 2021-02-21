#include<iostream>
using namespace std;


long long natural(long long n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+natural(n-1);
    }
}

int main()
{
    long long m;
    cin>>m;
    for(long long j=0;j<m;j++)
    {
    long long n;
    cin>>n;
    long long arr[n];
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    long long sume=natural(n-1);
    if(sume<=sum)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }}
    return 0;
}