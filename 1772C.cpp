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
        ll k,n;
        cin >> k >> n;
        ll arr[k] = {1};
        ll flag = 0;
        ll inc = 1;
        ll nn = 0;
        ll rem = k-2;
        ll val_rem = n;
        for(ll i=1;i<k;i++)
        {
            if(flag == 1)
            {
                arr[i] = arr[i-1]+1;
                continue;
            }

            nn = arr[i-1]+inc;
            val_rem = n-nn;
            if(val_rem >= rem)
            {
                arr[i] = nn;
                rem--;
                inc++;
            }
            else
            {
                flag = 1;
                arr[i] = arr[i-1]+1;
            }
        }

        for(ll i=0;i<k;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}