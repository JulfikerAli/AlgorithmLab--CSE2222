//Compare String
#include<bits/stdc++.h>

using namespace std;

int suma=0, sumb=0;
int b[1111111];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int x;
    for(int i=1;i<=n;i++){
        scanf("%1d", &x);
        suma+=x;
    }
    for(int i=1;i<=n;i++){
        scanf("%1d", &b[i]);
        sumb+=b[i];
    }
    while(q--){
        int a;
        scanf("%d", &a);
        if(b[a]==0){
            sumb+=1;
        }
        if(sumb>=suma) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
