#include <bits/stdc++.h>
using namespace std;

stringstream printVector(vector<char> &v)
{
    stringstream ss;
    ss << "[";
    for (auto &i : v)
    {
        ss << i << ", ";
    }
    ss << "]";
    return ss;
}
int main()
{
    map<string, vector<char>> team;
    int n, count = 0, answer = 0;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        string str = s[i];
        team[str.substr(1)].push_back(str[0]);
    }

    for (auto &i : team)
    {
        cout << i.first << " : " << printVector(i.second).str() << endl;
    }

    for (auto itr = team.begin(); itr != team.end(); ++itr)
    {
        for (auto itr1 = team.begin(); itr1 != team.end(); ++itr1)
        {
            if (itr->first != itr1->first)
            {
                vector<char> v(itr->second.size() + itr1->second.size());

                set_intersection(itr->second.begin(), itr->second.end(), itr1->second.begin(), itr1->second.end(), v.begin());
                for (auto i = v.begin(); i != v.end(); i++)
                {
                    cout << *i << " ";
                }
                answer = answer + (((itr->second.size() - count) * (itr1->second.size() - count)));
            }
        }
    }
    cout << answer << endl;
