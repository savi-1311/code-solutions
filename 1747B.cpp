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
        cout << (n/2) + (n%2) << "\n";
        ll start = 1;
        ll end = n*3;
        for(ll i=0;i<(n/2) + (n%2);i++)
        {
            cout << start << " " << end << "\n";
            start+=3;
            end-=3;
        }
    }
    return 0;
}