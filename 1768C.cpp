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
        ll arr[n];
        map<ll, ll> freq;
        loop(i, 0, n)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        ll flag = 0;
        map <ll,ll> extra;
        for (ll i = 1; i <= n; i++)
        {
            if (freq[i] == 0)
            {
                extra[i]++;
            }
            if (freq[i] > 2)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        vector<pair<ll, ll>> indexes;
        for (ll i = 0; i < n; i++)
        {
            indexes.pb({arr[i], i});
        }
        sort(indexes.begin(), indexes.end());
        ll p[n] = {0};
        map<ll, ll> pmap;
        ll q[n] = {0};
        map<ll, ll> qmap;
        for (ll i = 0; i < n; i++)
        {
            if (pmap[indexes[i].first] == 0)
            {
                p[i] = indexes[i].first;
                pmap[indexes[i].first]++;
            }
            else
            {
                q[i] = indexes[i].first;
                qmap[indexes[i].first]++;
            }
        }
        ll curr = 1;
        ll pointer = 0;
        for (ll i = 0; i < n; i++)
        {
            if(p[i]==0)
            {
                if(pmap[curr]==0)
                {
                    p[i]=curr;
                    pmap[curr]++;
                }
            } 
            else if(q[i]==0)
            {
                if(qmap[curr]==0)
                {
                    q[i]=curr;
                    qmap[curr]++;
                }
            }
            curr++;
        }
        vll exp;
        for(ll i=1;i<=n;i++)
        {
            if(pmap[i]==0)
            {
                exp.pb(i);
            }
        }
        pointer = 0;
        for(ll i=0;i<n;i++)
        {
            if(p[i]==0)
            {
                if(pointer<exp.size())
                {
                    p[i]=exp[pointer];
                    pmap[exp[pointer]]++;
                    pointer++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        vll exq;
        for(ll i=1;i<=n;i++)
        {
            if(qmap[i]==0)
            {
                exq.pb(i);
            }
        }
        pointer = 0;
        for(ll i=0;i<n;i++)
        {
            if(q[i]==0)
            {
                if(pointer<exq.size())
                {
                    q[i]=exq[pointer];
                    qmap[exq[pointer]]++;
                    pointer++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }

        for(ll i=1;i<=n;i++)
        {
            if(pmap[i]!=1 || qmap[i]!=1)
            {
                flag=1;
                break;
            }
        }
        for( ll i=0;i<n;i++)
        {
            ll m = max(p[i],q[i]);
            if(indexes[i].first!=m)
            {
                flag=1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        cout << "YES"
             << "\n";
        ll pans[n];
        ll qans[n];
        for(ll i=0;i<n;i++)
        {
            pans[indexes[i].second]=p[i];
            qans[indexes[i].second]=q[i];
        }
        for(ll i=0;i<n;i++)
        {
            cout << pans[i] << " ";
        }
        cout << "\n";
        for(ll i=0;i<n;i++)
        {
            cout << qans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}