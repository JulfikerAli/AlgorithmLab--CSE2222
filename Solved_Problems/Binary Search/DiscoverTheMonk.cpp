#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort (v.begin(), v.end());
    for(int c=1;c<=q;c++)
    {
        int d;
        cin>>d;
        if (binary_search (v.begin(), v.end(), d))
    cout << "YES\n"; else cout << "NO\n";

    }
    return 0;
}
