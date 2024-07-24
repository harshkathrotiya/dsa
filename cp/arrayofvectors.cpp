#include<bits/stdc++.h>
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v[n] ;//v={{1,2},{2,3},{3,5}};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v[i].push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i][0]<<endl;
    }
    
    return 0;
}