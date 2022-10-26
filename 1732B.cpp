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
        string arr;
        cin >> arr;
        ll index = n;
        for (ll i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                index = i;
                break;
            }
        }
        ll ans = 0;
        ll curr = -1;
        for (ll i = index; i < n; i++)
        {
            if (curr == -1)
            {
                curr = arr[i];
            }
            else
            {
                if (arr[i] != curr)
                {
                    ans++;
                    curr = arr[i];
                }
            }
        }
        if (curr != -1)
            ans++;
        cout << ans << "\n";
    }
    return 0;
}