#include <iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    for(int j=0;j<m;j++)
    {
    long long int n;
    cin>>n;
    long long int arr[n];
    
    long long int count=0;
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0)
        count++;
    }
    cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
