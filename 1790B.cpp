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
        ll n, s, r;
        cin >> n >> s >> r;
        ll start = s - r;
        start--;
        ll arr[n] = {1};
        for(ll i=0;i<n;i++)
        {
            arr[i] = 1;
        }
        arr[0]= s-r;
        s -= (s-r)+n-1;
        ll p = 1;
        while (s > 0)
        {
            ll rem = s / start;
            while (rem--)
            {
                arr[p]+=start;
                p++;
            }
            s = s % start;
            start = start-1;
        }
        for(ll i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}