#include <iostream>
using namespace std;
int main()
{
    long long int m;
    cin >> m;
    for (int l = 0; l < m; l++)
    {
        int n;
        cin >> n;
        int w[n], pos[n], count = 0;
        int j[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            pos[w[i] - 1] = i;
            //cin>>j[w[i]-1];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> j[w[i] - 1];
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<w[i]<<" "<<j[i]<<" "<<pos[i]<<endl;
        // }

        for (int i = 0; i < n - 1; i++)
        {
            while (pos[i + 1] <= pos[i])
            {
                pos[i + 1] = pos[i + 1] + j[i + 1];
                count++;
            }
        }
        cout << count;

        return 0;
    }
}