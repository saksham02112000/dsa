#include<iostream>
using namespace std;
string s[]={"","./","abc","def","ghi","jkl","mno","pqrv","tuv","wxyz"};
void combinations(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string code=s[ch-'0'];
    string ros=str.substr(1);

    for(int i=0;i<code.length();i++)
    {
        combinations(ros,ans+code[i]);
    }
}
int main()
{
    
    combinations("23","");
    return 0;
}