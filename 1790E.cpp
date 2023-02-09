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

void solve(ll n)
{
    ll sum = 2*n;
    ll A = n/2;
 
    ll a = 0, b = 0;
    ll flag = 0;
    for (ll i=0; i<8*sizeof(sum); i++)
    {
        ll ithBit = (n & (1 << i));
        ll Ai = (A & (1 << i));
        if (ithBit == 0 && Ai == 0)
        {
        }
        else if (ithBit == 0 && Ai > 0)
        {
            a = ((1 << i) | a);
            b = ((1 << i) | b);
        }
        else if (ithBit > 0 && Ai == 0)
        {
            a = ((1 << i) | a);
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "-1\n";
    }
    else if((a+b)!=sum)
    {
        cout << "-1\n";
    }
    else
    {
        cout << a << " " << b << "\n";
    }
    return;
}

int main()
{
    FIO;
    T
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}