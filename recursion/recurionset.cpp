#include<iostream>
#include <bits10_1.h/tdc++.h>
using namespace std;
void substring(string s, string ans)
{
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);


}


int main()
{
    
}