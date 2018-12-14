#include <bits/stdc++.h>
using namespace std;

map <int,int> visit;
void bfs(int source, map <int,vector<int> > adj) {
    queue<int> s;
    s.push(source);
    visit[source]=0;
    while (s.empty() == false) {
        int top = s.front();
        s.pop();
        int size = adj[top].size();
        for(int i=0;i<size;i++){
            int n =adj[top][i];
            if(!visit.count(n)){
                visit[n]=visit[top]+1;
                s.push(n);
            }
        }
     }
}

int main(){
	freopen("Network Input.txt","r",stdin);
	freopen("Network Output.txt","w",stdout);
    int level,a,b,Cases=0;
    while(scanf("%d",&level) && level){
             map <int,vector<int> > adj;
             for(int i=0;i<level;i++){
                     scanf("%d %d",&a,&b);
                     adj[a].push_back(b);
                     adj[b].push_back(a);
             }
             int ttl,source;
             while(scanf("%d %d",&source,&ttl) && (source!=0 || ttl!=0)){
                map <int,int>::const_iterator itr;
                visit.clear();
                bfs(source,adj);
                int Output = 0;
                for(itr = visit.begin(); itr != visit.end(); ++itr){

                    if((*itr).second>ttl)++Output;
                }
                Output += adj.size()-visit.size();
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",Cases,Output,source,ttl);
                Cases++;
             }
    }
 return 0;
}
