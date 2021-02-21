#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
// int knapsack(int value[],int weight[],int n,int W)
// {
//     int k[n+1][W+1];
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=W;j++)
//         {
//             k[i][j]=0;
//         }
//     }
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=W;j++)
//         {
//             if(n==0 || W==0)
//         {
//             k[i][j]=0;
//         }
//         else if(weight[i-1]<=j)
//         {
//             k[i][j]=max(value[i-1]+k[i-1][j-weight[i-1]], k[i-1][j]);
//         }
//         else{
//             k[i][j]=k[i-1][j];
//         }
// }}

// for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=W;j++)
//         {
//             cout<<k[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// return k[n][W];}
        
class item
{
    
    public:int value;
    int weight;
    float density;
     item(int value,int weight)
    {
        this->value=value;
        this->weight=weight;
        this->density=(float)value/(float)weight;
    }
};

int knapsack(int W,vector<item> items)
{
    int currspace=W;
    for(int i=items.size();i>=0;i--)
    {
            if(items[i].weight<=currspace)
            {
                
            }
    }
}

int main()
{
    vector<item> items;
    items.push_back(item(100,10));
    items.push_back(item(50,20));
    items.push_back(item(150,30));
    sort(items.begin(), items.end(), [](item l, item r) {
                    // ascending order
                    return l.density < r.density;
                });
                int W=50;
                knapsack(W,items);
    // int weight[]={10,20,30};
    // int value[]={100,50,150};
   // cout<<knapsack(value,weight,3,50)<<endl;
    return 0;
}