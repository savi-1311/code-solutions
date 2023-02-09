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
        map <ll,ll> freq;
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        sort(arr,arr+n);
        ll ans = 0;
        ll val = freq[arr[0]];
        ll count = 0;
        for(ll i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                ans+=(val);
                val = freq[arr[i]];
                count = 0;
            }
            else
            {
                if(freq[arr[i]]>freq[arr[i-1]])
                {
                    val+=abs(freq[arr[i]]-freq[arr[i-1]]);
                }
            }
        }
        ans+=(val);
        cout << ans << "\n";
    }
    return 0;
}