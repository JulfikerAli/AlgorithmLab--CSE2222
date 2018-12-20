#include<bits/stdc++.h>
using namespace std;

int main(){
     int TC;
cin >> TC;
while(TC--){
   long long int SIZE1,SIZE2,AV[1000000],i;
    cin >>SIZE1>>SIZE2;
    for(i=0;i<SIZE1+SIZE2;i++)
    cin >> AV[i];

    sort(AV,AV+SIZE1+SIZE2);

     for(i=SIZE1+SIZE2-1 ;i>=0; i--)
        cout <<AV[i]<<" ";
        cout <<"\n";
}
}
