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
        ll n, k;
        cin >> n >> k;
        ll arr[k];
        for (ll i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        if (k == 1)
        {
            pl("Yes") continue;
        }
        // check existing
        ll curr = INT_MIN;
        ll flag = 0;
        for (ll i = 1; i < k; i++)
        {
            ll diff = arr[i] - arr[i - 1];
            if (diff < curr)
            {
                flag = 1;
                break;
            }
            curr = diff;
        }
        if (flag == 1)
        {
            pl("No") continue;
        }
        ll threshold = arr[0];
        ll rem = n - k + 1;

        if (arr[0] > (arr[1] - arr[0]) * rem)
        {
            pl("No") continue;
        }

        pl("Yes")
    }
    return 0;
}