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
        ll n,k;
        cin >> n >> k;
        pair<ll, ll> a[n];
        for ( ll i = 0; i < n; i++)
            cin >> a[i].second;
        for ( ll i = 0; i < n; i++)
            cin >> a[i].first;
        sort(a, a + n);
        ll h = 0;
        ll i;
        for (i = 0; i < n && k > 0;)
        {
            h += k;
            while (a[i].second <= h && i < n)
                i++;
            k -= a[i].first;
        }
        if (i == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}