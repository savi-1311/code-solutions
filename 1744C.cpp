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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s = s+s;
        if(c=='g')
        {
            cout << "0\n";
            continue;
        }
        ll p1=0,p2=0;
        ll ans = 0;
        for(;p1<n*2 && p2<n*2;)
        {
            if(p1>p2)
            {
                p2 = p1+1;
            }
            if(s[p1]==c && s[p2]=='g')
            {
                ans = max(ans, p2-p1);
                p1++;
                continue;
            }
            while(p1<n*2 && s[p1]!=c)
            {
                p1++;
            }
            if(p1==n*2)
            break;

            while(p2<n*2 && s[p2]!='g')
            {
                p2++;
            }
            if(p2==n*2)
            break;

        }
        cout << ans << "\n";
    }
    return 0;
}