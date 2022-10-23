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
        ll time[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        for (ll i = 0; i < n; i++)
            cin >> time[i];

        vll dup;
        ll m = INT_MAX;
        ll M = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            dup.pb(arr[i] + time[i]);
            dup.pb(arr[i] - time[i]);
            m = min(m, arr[i] - time[i]);
            m = min(m, arr[i] + time[i]);
            M = max(M, arr[i] - time[i]);
            M = max(M, arr[i] + time[i]);
        }

        ll ans = (m + M) / 2;
        if ((m + M) % 2 != 0)
        {
            cout << ans << ".5 \n";
            continue;
        }
        cout << ans << "\n";
    }
    return 0;
}