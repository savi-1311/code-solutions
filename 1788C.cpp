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
        ll val = 2*n;
        ll totSum = (val*(val+1))/2;
        ll sum = 0;
        for(ll i=1;i<=n-1;i++)
        {
            sum+=i;
        }
        ll rem = totSum - sum;
        if(rem%n!=0)
        {
            cout << "NO\n";
            continue;
        }

        ll start = rem/n;

        vector<pair<ll,ll>>ans;

        for(ll i=1;i<=n;i+=2)
        {
            ans.pb({i,start-i});
            start++;
        }

        for(ll i=2;i<=n;i+=2)
        {
             ans.pb({i,start-i});
             start++;
        }
        cout << "YES\n";
        for(ll i=0;i<n;i++)
        {
            cout << ans[i].first << " " << ans[i].second << "\n";
        }
    }
    return 0;
}