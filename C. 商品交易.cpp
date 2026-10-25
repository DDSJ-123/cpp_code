#include<bits/stdc++.h>
using namespace std;
const int N=100005;
vector<int> g[200005];
queue<int> q;
int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	vector<int> v(n);
	vector<int> dis(n,0x3f3f3f3f);
	vector<bool> vis(n,false);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		int w=abs(v[x]-v[y]); 
		g[x].push_back({y,w});
	}	
	q.push(a);
	dis[a]=0;
	vis[a]=true;
	while(q.size()!=0){
		int u=q.front();
		for(auto i:g[u]){
			int e=i.first;
			int w=i.second;
			if(dis[u]+w<dis[e]){
				dis[e]=dis[u]+w;
				if(!vis[e]){
					q.push(e);
					vis[e]=true;
				}
			}
		}
		q.pop();
		vis[u]=false; 
	}
	if(dis[b]!=-1){
		cout<<dis[b]+(v[b]-v[a]);
	}else{
		cout<<"No solution"; 
	}
	return 0;
}

