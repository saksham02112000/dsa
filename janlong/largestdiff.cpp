#include<iostream>
#include<cmath>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int j=0;j<m;j++)
    {
        int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
        	cin>>arr[i];
        }
        int min=INT_MAX;
        int maxt=INT_MIN;
        int x=max(min,maxt);
       for(int i=0;i<n;i++)
       {
       		if(arr[i]<min)
       		min=arr[i];
       		if(arr[i]>maxt)
       		maxt=arr[i];
	   }
       cout<<(2*(maxt-min));


    }
}