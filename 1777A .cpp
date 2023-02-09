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
        loop(i, 0, n)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        ll count = 1;
        ll flag=arr[0]%2;
        for(ll i=1;i<n;i++)
        {
            ll curr = arr[i]%2;
            if(curr==flag)
            {
                count++;
            }
            else
            {
                flag = arr[i]%2;
                ans+=count-1;
                count = 1;
            }
        }
        ans+=count-1;
        cout << ans << "\n";
    }
    return 0;
}