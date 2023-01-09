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
        ll p = n * n;
        ll arr[p];
        ll start = 1;
        ll end = n * n;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (count % 2 == 0)
                {
                    arr[count] = start;
                    start++;
                }
                else
                {
                    arr[count] = end;
                    end--;
                }
                count++;
            }
        }
        //cout << "here";
        ll ret[n][n];
        ll k = 0, i = 0;
        while (k < n * n)
        {
            ll j = i;
            while (j < n - i)
                ret[i][j++] = arr[k++];
            j = i + 1;
            while (j < n - i)
                ret[j++][n - i - 1] = arr[k++];
            j = n - i - 2;
            while (j > i)
                ret[n - i - 1][j--] = arr[k++];
            j = n - i - 1;
            while (j > i)
                ret[j--][i] = arr[k++];
            i++;
        }


        for (ll q = 0; q < n; q++)
        {
            for (ll j = 0; j < n; j++)
            {
                cout << ret[q][j];
                if (j == n - 1)
                {
                    cout << "\n";
                }
                else
                {
                    cout << " ";
                }
            }
        }
    }
    return 0;
}