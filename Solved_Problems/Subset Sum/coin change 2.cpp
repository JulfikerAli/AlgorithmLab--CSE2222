#include<bits/stdc++.h>
#define ll long long
#define MD 100000007
using namespace std;
ll n,k,arr[105],dp[10005];

ll solve()
{
    ll i,j;
    memset(dp,0,sizeof dp);
    dp[0] = 1;
    for(j=1;j<=n;j++){
        for(i=1;i<=k;i++){
            if(i>=arr[j]){
                dp[i] = (dp[i] + dp[i-arr[j]])%MD;
            }
        }
    }
    return dp[k];
}


int main(){


    freopen("Orientation.txt","r",stdin);
    freopen("Result.txt","w",stdout);

    ll i,j,ts,cas=0;

    cin>>ts;
    while(++cas<=ts){
        scanf("%lld %lld",&n,&k);
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
        }
        printf("Case %lld: %lld\n",cas,solve());
    }
    return 0;
}
