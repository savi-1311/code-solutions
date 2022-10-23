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
        unordered_map<char, ll> s;
        unordered_map<char, ll> t;
        s['a'] = 1;
        t['a'] = 1;
        while (n--)
        {
            ll type, k;
            string mask;
            cin >> type >> k >> mask;
            unordered_map<char, ll> maskm;
            for (ll i = 0; i < mask.length(); i++)
            {
                maskm[mask[i]] += k;
            }
            if (type == 1)
            {
                for (ll j = 97; j <= 122; j++)
                {
                    s[char(j)] += maskm[char(j)];
                }
            }
            if (type == 2)
            {
                for (ll j = 97; j <= 122; j++)
                {
                    t[char(j)] += maskm[char(j)];
                }
            }
            ll possible = 0;
            ll others = 0;
            for (ll j = 98; j <= 122; j++)
            {
                if (t[char(j)] > 0)
                {
                    possible = 1;
                    break;
                }
                others+=s[char(j)];
            }
            if (possible == 1)
            {
                cout << "YES\n";
                continue;
            }
            if (s['a'] < t['a'] && others==0)
            {
                cout << "YES\n";
                continue;
            }

            cout << "NO\n";
            continue;
        }
    }
    return 0;
}