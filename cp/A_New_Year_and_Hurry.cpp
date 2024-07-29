#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
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
    int n,k;
    cin>>n>>k;

  // int have_time=(4.0-(k/60))*60;
  
   int arr[n+1];
   arr[0]=0;
   for (int  i = 1; i <= n+1; i++)
   {
      arr[i]=i*5;
   }
   for (int  i = 1; i < n+1; i++)
   {
    // cout<<arr[i]<<endl;
   }
   int check=k;
   int count=0;
   int i=1;
   for (int i = 1; i <= n; i++)
   {
      if(check<=240)
      {
        check+=arr[i];
      
      if(check>240){
      break;}
      count++;
      }
      
   }
   
   

    cout<<count;
    return 0;
}