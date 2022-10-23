#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define umap unordered_map<ll, ll>
#define pa pair<ll, ll>
#define pb push_back
#define loop(i, m, n) for (ll i = m; i < n; i++)
#define loope(i, m, n) for (ll i = m; i <= n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
#define T     \
    ll t;     \
    cin >> t; \
    while (t--)
#define pl(i) cout << i << "\n";
#define ps(i) cout << i << " ";
#define p(i) cout << i;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    FIO;
    T
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            ll y = arr[i];
            while (y % 2 == 0 && y != 0)
            {
                y /= 2;
                x++;
            }
        }
        if (x >= n)
        {
            cout << "0\n";
            continue;
        }
        ll rem = n - x;
        ll val = 0;
        ll flag = 0;
        vll twos;
        for (ll i = n; i > 0; i--)
        {
            if (i % 2 == 0)
            {
                ll k = 0;
                ll y = i;
                while (y % 2 == 0 && y != 0)
                {
                    y /= 2;
                    k++;
                }
                twos.pb(k);
            }
        }
        sort(twos.begin(), twos.end());
        reverse(twos.begin(), twos.end());

        for (ll i = 0; i < twos.size(); i++)
        {
            val+=twos[i];
            if (val >= rem)
            {
                flag = 1;
                cout << i+1 << "\n";
                break;
            }
        }
        if (flag == 0)
        {
            cout << "-1\n";
        }
    }
    return 0;
}