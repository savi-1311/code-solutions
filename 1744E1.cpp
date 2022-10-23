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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll flag = 0;
        ll pro = a * b;
        for (ll i = a + 1; i <= c; i++)
        {
            ll got = __gcd(pro, i);
            ll rem = pro / got;
            if (rem == 1)
            {
                cout << i << " " << d << "\n";
                flag = 1;
                break;
            }
            ll toFindD = ((b / rem) + 1) * rem;
            if (toFindD > b && toFindD <= d)
            {
                cout <<  i << " " << toFindD << "\n";
                flag=1;
                break;
            }
        }
        if (flag == 1)
            continue;


        for (ll i = b + 1; i <= d; i++)
        {
            ll got = __gcd(pro, i);
            ll rem = pro / got;
            if (rem == 1)
            {
                cout << b << " " << i << "\n";
                flag = 1;
                break;
            }
            ll toFindC = ((a / rem) + 1) * rem;
            if (toFindC > a && toFindC <= c)
            {
                cout <<  toFindC << " " << i << "\n";
                flag=1;
                break;
            }
        }
        if (flag == 1)
            continue;

        cout << "-1 -1\n";
    }
    return 0;
}