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
    ll n,x;
    cin >> n >> x;
    ll arr[n];
    unordered_map<ll,ll> freq;
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for(ll i=1; i<=500000; i++)
    {
        ll div = freq[i]/(i+1);
        ll rem = freq[i]%(i+1);
        freq[i+1] += div;
        freq[i]=rem;
    }

    ll flag = 0;
    for(ll i=1;i<x;i++)
    {
        if(freq[i]>0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
       return 0;
}