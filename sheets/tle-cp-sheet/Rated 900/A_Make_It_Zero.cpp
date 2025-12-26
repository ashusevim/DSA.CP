#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                zeros++;
            }
        }
        if (n % 2 == 0)
        {
            cout << 2 << '\n';
            cout << 1 << " " << n << '\n';
            cout << 1 << " " << n << '\n';
        }
        else
        {
            cout << 4 << '\n';
            cout << 1 << " " << 2 << '\n';
            cout << 1 << " " << 2 << '\n';
            cout << 2 << " " << n << '\n';
            cout << 2 << " " << n << '\n';
        }
    }
}