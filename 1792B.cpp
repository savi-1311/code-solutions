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
        ll a1,a2,a3,a4;
        cin >> a1 >> a2 >> a3 >> a4;
        ll ans = a1;
        if(a1==0 && a2+a3+a4>0)
        {
            cout << 1 << "\n";
            continue;
        }
        else if(a1==0 && a2+a3+a4==0)
        {
            cout << 0 << "\n";
            continue;
        }
        ll t2=0;
        // type 2 and 3;
        if(a2>a3)
        {
            ans+=(a3)*2;
            t2=(a2-a3);
        }
        else
        {
            ans+=(a2)*2;
            t2=(a3-a2);
        }
        ll remj = t2+a4;
        ll remp = a1;
        ll more = min(remj,remp);
        remj-=more;
        if(remj>0)
        {
            ans+=more+1;
        }
        else
        {
            ans+=more;
        }
        cout << ans << "\n";
    }
    return 0;
}