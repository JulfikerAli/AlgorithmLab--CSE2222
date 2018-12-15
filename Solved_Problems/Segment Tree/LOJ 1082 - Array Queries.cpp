#include <iostream>
#include <stdio.h>
#include <limits.h>

using namespace std;

int a[100005];
int tree[400005];

int build_segment_tree(int l, int r, int node){

	int x;
	int y;

	if(l == r) {
		tree[node] = a[l];
		return a[l];
	}

	x = build_segment_tree(l, (l + r) / 2, node * 2);
	y = build_segment_tree((l + r) / 2 + 1, r, node * 2 + 1);

	tree[node] = min(x, y);

	return tree[node];
}

int query(int l, int r, int e, int f, int node){
	int x;
	int y;

	if(e <= l and f >= r) {
		return tree[node];
	}

	if(e > r or f < l) {
		return INT_MAX;
	}

	x = query(l, (l+r)/2, e, f, node * 2);
	y = query((l+r)/ 2 + 1, r, e, f, node * 2 + 1);

	return min(x, y);
}


int main(){
    freopen("Array Queries Input.txt","r",stdin);
    freopen("Array Queries Output.txt","w",stdout);

	int i,t,n,qs,x,y,TC;

	scanf("%d", &t);

	for (TC = 1; TC <= t; TC++) {

		scanf("%d", &n);
		scanf("%d", &qs);

		for (i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}

		build_segment_tree(1, n, 1);

		printf("Case %d:\n", TC);

		for(i = 0; i < qs; i++) {
			scanf("%d", &x);
			scanf("%d", &y);

			printf("%d\n", query(1, n, x, y, 1));
		}


	}


}
