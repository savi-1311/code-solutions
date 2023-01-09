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
        ll arr[n];
        loop(i,0,n)
        {
            cin >> arr[i];
        }
        ll find = 1;
        ll len = 0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]==find)
            {
                find++;
                len++;
            }
        }
        ll rem = n-len;
        if(rem%k==0)
        {
            cout << rem/k << "\n";
        } else
        {
            cout << (rem/k)+1 << "\n";
        }
    }
    return 0;
}