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
        ll pro = 0;
        for(ll i=0;i<n;i++)
        {
        cin >> arr[i];
        if(arr[i]==2)
        pro++;
        }
        ll ans = -1;
        ll curr = 0;

        for(ll i=0;i<n-1;i++)
        {
            if(arr[i]==2)
            curr++;

            ll rem = pro-curr;

            if(rem==curr)
            {
                ans = i+1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}