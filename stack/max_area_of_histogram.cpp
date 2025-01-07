#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
#define hk                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef stack<pii> spii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

// problem: maximum area of histogram , largest rectengular in the histogram

int main()
{
    hk int n;
    cin >> n;
    int a[n];
    fo(i, n)
    {
        cin >> a[i];
    }
    vi left, right;
    spii s;
    int pseudo = -1,pseudo1=n;

    // nearest smaller left
    fo(i, n)
    {
        if (s.empty())
        {
            left.pb(pseudo);
        }
        else if (s.size() > 0 && s.top().first < a[i])
        {
            left.pb(s.top().second);
        }
        else if (s.size() > 0 && s.top().first >= a[i])
        {
            while (!s.empty() && s.top().first >= a[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                left.pb(pseudo);
            }
            else
            {

                left.pb(s.top().second);
            }
        }
        s.push(make_pair(a[i], i));
    }

    // nearest smaller right
    while (!s.empty())
    {
        s.pop();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            right.pb(pseudo1);
        }
        else if (s.size() > 0 && s.top().first < a[i])
        {
            right.pb(s.top().second);
        }
        else if (s.size() > 0 && s.top().first >= a[i])
        {
            while (!s.empty() && s.top().first >= a[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                right.pb(pseudo1);
            }
            else
            {
                right.pb(s.top().second);
            }
        }
        s.push(make_pair(a[i], i));
    }
    reverse(right.begin(),right.end());
    int m=0;
    for(int i=0;i<n;i++)
    {
        m=max(m,(right[i]-left[i]-1)*a[i]);
    }
    cout<<m;
    return 0;
}