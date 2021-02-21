#include<iostream>
using namespace std;
int noofways(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    int count=0;
    for(int i=1;i<6;i++)
    {
        count+=noofways(n-i);
    }
    return count;
}
int main()
{
    cout<<noofways(3)<<endl;
    return 0;
}