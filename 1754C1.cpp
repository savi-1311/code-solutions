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
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<pair<ll, ll>> ans;
        vector<pair<ll, ll>> posval;
        vector<pair<ll, ll>> negval;
        ll pos = 0, neg = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                ans.pb({i + 1, i + 1});
                if (arr[i] == 1)
                    pos++;
                else
                    neg++;
                continue;
            }
            if (arr[i] == 1 && arr[i + 1] == 1)
            {
                ans.pb({i + 1, i + 2});
                posval.pb({i + 1, i + 2});
                i++;
            }
            else if (arr[i] == -1 && arr[i + 1] == -1)
            {
                ans.pb({i + 1, i + 2});
                negval.pb({i + 1, i + 2});
                i++;
            }
            else
            {
                ans.pb({i + 1, i + 1});
                if (arr[i] == 1)
                    pos++;
                else
                    neg++;
            }
        }
        if (pos != neg)
        {
            if (abs(pos - neg) % 2 == 1)
            {
                pl(-1);
                continue;
            }

            if (neg > pos)
            {
                ll diff = neg - pos;
                if (posval.size() < (diff / 2))
                {
                    pl(-1);
                    continue;
                }
                ll p = 0;
                pl(ans.size() + (diff/2));
                for (auto i : ans)
                {
                    if (diff > 0)
                    {
                        if (i.first == posval[p].first && i.second == posval[p].second)
                        {
                            p(i.first);
                            p(" ");
                            pl(i.first);
                            p(i.second);
                            p(" ");
                            pl(i.second);
                            diff -= 2;
                            p++;
                        }
                        else
                        {
                            p(i.first);
                            p(" ");
                            pl(i.second);
                        }
                    }
                    else
                    {
                        p(i.first);
                        p(" ");
                        pl(i.second);
                    }
                }
            }
            else
            {
                ll diff = pos - neg;
                if (negval.size() < (diff / 2))
                {
                    pl(-1);
                    continue;
                }
                ll p = 0;
                pl(ans.size() + (diff/2));
                for (auto i : ans)
                {
                    if (diff > 0)
                    {
                        if (i.first == negval[p].first && i.second == negval[p].second)
                        {
                            p(i.first);
                            p(" ");
                            pl(i.first);
                            p(i.second);
                            p(" ");
                            pl(i.second);
                            diff -= 2;
                            p++;
                        }
                        else
                        {
                            p(i.first);
                            p(" ");
                            pl(i.second);
                        }
                    }
                    else
                    {
                        p(i.first);
                        p(" ");
                        pl(i.second);
                    }
                }
            }
        }
        else
        {
            pl(ans.size());
            for (auto i : ans)
            {
                ps(i.first);
                pl(i.second);
            }
        }
    }
    return 0;
}