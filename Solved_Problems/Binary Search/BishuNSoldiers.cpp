//Bishu and Soldiers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,m[10003],q,bp,sum=0,t=0,s;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m[i];
	}
	cin>>q;
	for(i=1;i<=q;i++)
	{
		cin>>bp;
		for(j=1;j<=n;j++)
		{
			if(bp>=m[j])
			{
				sum=sum+m[j];
				t++;
			}
		}
		cout<<t<<" "<<sum<<endl;
		t=0,sum=0;
	}
	return 0;
}
