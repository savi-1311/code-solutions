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
            cin >> arr[i];
        }
        ll v1 = INT_MIN;
        ll v2 = INT_MAX;
        ll flag1=0;
        ll flag2=0;
        for(ll i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                v1 = max(v1, arr[i-1]-((arr[i-1]-arr[i])/2));
                flag1=1;
            }
            else if(arr[i]>arr[i-1])
            {
                v2 = min(v2, arr[i-1]+((arr[i]-arr[i-1])/2));
                flag2=1;
            }
        }

        if(flag1==0 && flag2==0)
        {
            cout << "0\n";
            continue;
        }

        if(flag1==0)
        {
            cout << "0\n";
            continue;
        }

        if(flag2==0)
        {
            cout << v1 << "\n";
            continue;
        }

        if(v2>=v1)
        {
            cout << v1 << "\n";
        }
        else
        {
            cout << "-1" << "\n";
        }
    }
    return 0;
}