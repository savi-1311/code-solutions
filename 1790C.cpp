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
        ll arr[n][n-1];
        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n-1; j++)
            {
                cin >> arr[i][j];
                if (j == 0)
                {
                    freq[arr[i][j]]++;
                }
            }
        }
        ll start = 1;
        ll val = 0;
        for (auto x : freq)
        {
            if (x.second > val)
            {
                val = x.second;
                start = x.first;
            }
        }
        cout << start << " ";
        for (ll i = 0; i < n; i++)
        {
            if (arr[i][0] != start)
            {
                for (ll j = 0; j < n-1; j++)
                    cout << arr[i][j] << " ";
                break;
            }
        }
        cout << "\n";
    }
    return 0;
}