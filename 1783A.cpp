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
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<ll>());
        if(arr[n-1]==arr[0])
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if(arr[0]==arr[1])
        {
            ll temp = arr[n-1];
            arr[n-1] = arr[0];
            arr[0] = temp;
        }
        for(ll i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}