#include<bits/stdc++.h>
using namespace std;
struct edge{
	int form,to,len,next;
}a[200005];
int dis[20005];
bool vis[20005];
int pre[20005];
int n,e,k;
queue<int> q;
void add(int u,int v, int l){
	k++;
	a[k]={u,v,l,pre[u]};
	pre[u]=k;
}
int main(){
	cin>>n>>e;
	for(int i=1;i<=e;i++){
		int x,y,l;
		cin>>x>>y>>l;
		add(x,y,l);
	}
	memset(dis,0x3f,sizeof(dis));
	dis[1]=0;
	q.push(1);
	vis[1]=true;
	while(q.size()!=0){
		int h=q.front();
		for(int i=pre[h];i!=0;i=a[i].next){
			int to=a[i].to;
			if(dis[h]+a[i].len<dis[to]){
				dis[to]=dis[h]+a[i].len;
				if(!vis[to]){
					q.push(to);
					vis[to]=true;
				}
			}
		}
		vis[h]=false;
		q.pop();
	}
	for(int i=2;i<=n;i++){
		cout<<dis[i]<<"\n";
	}
	return 0;
}



