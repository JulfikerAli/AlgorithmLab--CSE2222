#include<bits/stdc++.h>
using namespace std;


vector<int>adj[1006];
vector<pair<int,int> >Pair;
int visit[1006],level[1006];

void bfs(int source){
queue<int>q;
q.push(source);
while(!q.empty()){
    int z=q.front();
    q.pop();

    for(int i=0;i<adj[z].size();i++){
        if(visit[adj[z][i]]=0){
            visit[adj[z][i]]=1;
            level[adj[z][i]]=level[z]+1;
            q.push(adj[z][i]);
        }
    }
}
}


int main(){
    int node,road1,road2,i,q,x;
cin>>node;
for(i=1;i<node;i++){
    cin>>road1>>road2;
    adj[road1].push_back(road2);
    adj[road2].push_back(road1);
}
memset(visit,0,sizeof(visit));
memset(level,0,sizeof(level));

visit[1]=1;
level[1]=0;
bfs(1);

cin>>q;
for(int i=1;i<=q;i++){
    cin>>x;

    Pair.push_back(make_pair(level[x],x));
}
sort(Pair.begin(),Pair.end());

    cout<<Pair[0].second<<endl;


    return 0;
}
