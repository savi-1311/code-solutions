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
        vll ans;
        if (n % 2 == 0)
        {
            ll f = (n / 2);
            ll b = n;
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    ans.pb(f);
                    f--;
                }
                else
                {
                    ans.pb(b);
                    b--;
                }
            }
        }
        else
        {
            ll f = 1;
            ll b = (n / 2) + 2;
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    ans.pb(f);
                    f++;
                }
                else
                {
                    ans.pb(b);
                    b++;
                }
            }
        }

        for (ll i = 0; i < ans.size(); i++)
        {
            ps(ans[i]);
        }
        cout << "\n";
    }
    return 0;
}