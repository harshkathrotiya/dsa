#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int a[10];
    vector<int> v;
    int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
       
    //     v.pop_back();
    // }
    
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(8);
    // v.pop_back();
    // vector<int> v2 = v;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << endl;
    // }
    
    vector<string> vs;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }
    
    // for (int i = 0; i < vs.size(); i++)
    // {
    //     cout << vs[i] << endl;
    // }
    vector<string>::iterator it;
    for (it = vs.begin(); it != vs.end(); ++it)
    {
        cout << *it << endl;
    }
    
    return 0;
}
