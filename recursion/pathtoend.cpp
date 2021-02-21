#include<iostream>
using namespace std;
int pathtoend(int m,int n,int row,int col)
{
    if(m==row-1 && n==col-1)
    {
        return 1;
    }
    if(m>row-1 || n>col-1)
    {
        return 0;
    }

    return pathtoend(m+1,n,row,col)+pathtoend(m,n+1,row,col);
}
int main()
{
    cout<<pathtoend(0,0,3,3);
    return 0;
}