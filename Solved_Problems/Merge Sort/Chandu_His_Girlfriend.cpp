#include<bits/stdc++.h>
using namespace std;

int main(){
     int TC;
cin >> TC;
while(TC--){
    long long int SIZE,AV[1000000],i;
    cin >>SIZE;
    for(i=1;i<=SIZE;i++)
    cin >> AV[i];

    sort(AV+1,AV+SIZE+1);

     for(i=SIZE ;i>=1; i--)
        cout <<AV[i]<<" ";
        cout <<"\n";
}
}
