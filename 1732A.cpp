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
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll gcd = arr[0];
        for (ll i = 1; i < n; i++)
        {
            gcd = __gcd(gcd, arr[i]);
        }

        if (gcd == 1)
        {
            cout << "0 \n";
            continue;
        }

        if(__gcd(gcd,n)==1)
        {
            cout<<"1 \n";
            continue;
        }

        if(__gcd(gcd,n-1)==1)
        {
            cout<<"2 \n";
            continue;
        }

        cout << "3 \n";
    }
    return 0;
}