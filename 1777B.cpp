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
    ll M = 1e9+7;
    T
    {
        ll n;
        cin >> n;
        ll k1[n+1];
        ll k2[n+1];
        k1[1]=0;
        k2[1]=1;
        for( ll i=2;i<=n;i++)
        {
            k2[i] = (k2[i-1]%M*i%M)%M;
            k1[i] = (k1[i-1]%M+((i-1)*2)%M)%M;
        }
        cout << (k1[n]%M * k2[n]%M)%M << "\n";
    }
    return 0;
}