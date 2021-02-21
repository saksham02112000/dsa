#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool arr[n] = {1};
   // int time = 0;
    int k;
    cin >> k;
    int f = 0;
    int l = n - 1;
    for (int time = 0; time <= k; time++)
    {
        if (f == n)
        {
            f = 0;
        }
        if (l == -1)
        {
            l = n - 1;
        }
        if (f + 1 == l - 1)
        {
            arr[f + 1] = false;
        }
        while (arr[l - 1] != true)
        {
            l = l - 1;
            if (l == -1)
            {
                l = n - 1;
            }
        }
        f++;
        l--;
    }
}