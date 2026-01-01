#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll k = 1;
        int ans = INT_MIN;
        for (int start = 0; start < 2; start++)
        {
            ll w = a, d = b;
            int layer = 1;
            bool whitePlay = (start == 0);
            while (whitePlay)
            {
                if (w >= k)
                {
                    w = w - k;
                    layer++;
                }
                else
                    break;
                if (d >= k)
                {
                    d = d - k;
                    layer++;
                }
                else
                    break;
                k = k * 2;
                whitePlay = !whitePlay;
            }
            ans = max(ans, layer);
        }
        cout << ans << '\n';
    }
}