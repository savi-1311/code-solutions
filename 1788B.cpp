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
        string s;
        cin >> s;
        ll len = s.length();
        string s1 = "";
        string s2 = "" ;
        ll flag = 0;
        for(ll i=0;i<len;i++)
        {
            ll val = s[i]-48;
            if(val%2==0)
            {
                char k = char((val/2)+48);
                s1 = s1 + k;
                s2 = s2 + k;
            }
            else
            {
                char k1 = char((val/2)+48);
                char k2 = char((val/2)+49);
                if(flag==0)
                {

                    s1 = s1 + k1;
                    s2 = s2 + k2;
                }
                else
                {
                    s1 = s1 + k2;
                    s2 = s2 + k1;
                }
                if(flag==0)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }
        }
        cout << stoll(s1) << " " << stoll(s2) << "\n";
    }
    return 0;
}