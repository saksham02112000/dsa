#include<iostream>
using namespace std;
void reversestring(string s,int size)
{
    if(size==0)
    {
        return;
    }
    reversestring(s.substr(1),size-1);
    cout<<s[0];
}

int main()
{
    string s="saksham";
    reversestring(s,s.length());
    return 0;
}