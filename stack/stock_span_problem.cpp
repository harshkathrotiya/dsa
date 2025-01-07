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
#define hk ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
    hk
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
        cin>>a[i];
   }
   vi v;
   stack< pair<int,int> > s;
   for (int i = 0; i < n; i++)
   {
        if(s.empty())
        {
            v.pb(-1);
        }
        else if(s.size()>0 && s.top().first>a[i])
        {
            v.pb(s.top().second);
        }
        else if(s.size()>0 && s.top().first<a[i])
        {
            while(s.size()>0 && s.top().first<a[i])
            {
                s.pop();
            }
            if(s.empty())
            v.pb(-1);
            else 
            v.pb(s.top().second);
        }
        s.push(make_pair(a[i],i));
   }
   for (int i = 0; i < n; i++)
   {
        
        if(i-v[i]<=0)
        cout<<1<<" ";
        else 
        cout<<i-v[i]<<" ";

   }
   
   
    return 0;
}




//second approach
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// #define hk ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main() {
//     hk
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     vector<int> v(n);
//     stack<int> s;

//     for (int i = 0; i < n; i++) {
//         while (!s.empty() && a[s.top()] <= a[i]) {
//             s.pop();
//         }
//         if (s.empty()) {
//             v[i] = i + 1;
//         } else {
//             v[i] = i - s.top();
//         }
//         s.push(i);
//     }

//     for (int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }
    
//     return 0;
// }
