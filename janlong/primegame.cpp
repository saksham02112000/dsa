#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//long long int arr[1000001];
const long long MAX_SIZE = 1000001; 
int binarySearchVector(vector<long long> &arr, long long int low,
                       long long int high,long long int x) {
    if (low > high)
        return -1;
 
    if (x >= arr[high])
        return high;
 
    int mid = (low + high) / 2;
 
    if (arr[mid] == x)
        return mid;
 
    if (mid > 0 && arr[mid - 1] <= x
        && x < arr[mid])
        return mid - 1;
 
    if (x < arr[mid])
        return binarySearchVector(
                arr, low, mid - 1, x);
 
    return binarySearchVector(arr, mid + 1, high, x);
}



  
// function generate all prime number less then N in O(n) 
void seive(long long int N,vector<long long int> &prime) 
{ 
    vector<long long >isprime(MAX_SIZE , true); 
    isprime[0] = isprime[1] = false ; 
  
    for (long long int i=2; i<N ; i++) 
    { 
        
        if (isprime[i]) 
        { 
            prime.push_back(i);
        } 
        for (long long int j=0;  j < (int)prime.size() &&   i*prime[j] < N ;   j++) 
        { 
            isprime[i*prime[j]]=false;

        } 
    } 
} 

int main()
{
    vector<long long int>prime; 
    seive(1000001,prime);
    int p;
    cin>>p;
    stringstream ss;
    for(int o=0;o<p;o++)
    {
        long long int x,y;
        cin>>x>>y;

        if(y==1)
        {
            ss<<((x>2)? "Divyam": "Chef");
            ss<<endl;
            continue;
        }
        long long int ind=(binarySearchVector(prime, 0, prime.size()-1,x));
    if((ind+1)>y)
    {
        ss<<"Divyam";
    }
    else{
        ss<<"Chef";
    }
    ss<<endl;
    }
    cout<<ss.str();
    return 0;
}

