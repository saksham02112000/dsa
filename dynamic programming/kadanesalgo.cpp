#include<bits/stdc++.h>
using namespace std;

int kadanesalgo(int arr[],int n)
{
    int max_so_far=arr[0];
    int curr=arr[0];
    for(int i=1;i<n;i++)
    {
        curr=max(arr[i],curr+arr[i]);
        max_so_far=max(max_so_far,curr);
    }
    return max_so_far;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=kadanesalgo(arr,n);
    cout<<max;
    return 0;
}