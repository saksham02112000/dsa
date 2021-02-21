#include<iostream>
using namespace std;
int permutation(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
    }
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        string k=s.substr(0,i)+s.substr(i+1,s.length());
        permutation(k,ans+c);
    }
}
int main()
{
    string s={"ABC"};
    permutation(s,"");
    return 0;
}