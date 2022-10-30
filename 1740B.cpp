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
        ll smallSum = 0;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            cin >> x >> y;
            if(x<y)
            {
                smallSum += x;
                arr[i] = y;
            }
            else
            {
                smallSum += y;
                arr[i] = x;
            }
        }

        sort(arr,arr+n);

        ll perimeter = 0;
        for(ll i=1;i<n;i++)
        {
            perimeter += (arr[i]-arr[i-1]);
        }

        perimeter += arr[n-1];
        perimeter += arr[0];

        perimeter += (smallSum*2);

        cout << perimeter << "\n";

    }
    return 0;
}