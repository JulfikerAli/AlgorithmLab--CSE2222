#include <iostream>
using namespace std;

int main(){

    int n , ans = 0 , countt = 0;
    cin >> n;
    int a[n+9];
    for(int i = 1 ; i <= n ;i++)
        cin >> a[i];
    for(int i = 1 ; i <= n ;i++)
    {
        countt = 0;
        int x = a[i];
        while(x != -1)
        {
            x = a[x];
            countt++;
        }
        ans = max(ans , countt);
    }
    cout << ans+1;
    return 0;
}
