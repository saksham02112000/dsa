#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class time
{
public:
    string time;
    string meridian;
};

int updatetimings(string s1, string m1)
{
    s1 = s1.substr(0, 2) + s1.substr(3, 5);

    int ti = stoi(s1);

    if (m1 == "AM" && ti >= 1200 && ti < 1300)
    {
        ti = ti - 1200;
    }
    if (m1 == "PM" && ti<1200)
    {
        ti = ti + 1200;
    }
    return ti;
}

int main()
{
    int o;
    cin>>o;
    for(int q=0;q<o;q++)
    {
    class time t;
    cin >> t.time;
    cin >> t.meridian;
    int rt = updatetimings(t.time, t.meridian);
    int n;
    cin >> n;
    class time p[2 * n];
    for (int i = 0; i < 2 * n; i = i + 2)
    {
        cin >> p[i].time;
        cin >> p[i].meridian;
        cin >> p[i + 1].time;
        cin >> p[i + 1].meridian;

        int t1 = updatetimings(p[i].time, p[i].meridian);
        int t2 = updatetimings(p[i + 1].time, p[i + 1].meridian);
        if (rt >= t1 && rt <= t2)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }}
    return 0;
}