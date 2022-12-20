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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll r1 = 0,r2 = 0;
        ll c1=0,c2=0;
        if(a>b)
        {
            r1 = 1;
        }
        if(c>d)
        {
            r2 = 1;
        }

        if(a>c)
        {
            c1 = 1;
        }
        if(b>d)
        {
            c2 = 1;
        }

        if(r1==r2 && c1==c2)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}