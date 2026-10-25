#include<bits/stdc++.h>
using namespace std;
const int N=1e4*10+10;
typedef pair<int,int> pp;
struct node{
	int to,len,next;
}a[N];
priority_queue<pp,vector<pp>,greater<pp>> q;
int n,m,k;
int s,t;
int x,y,len;
int idx;
int dis[N],pre[N];
bool vis[N];
void add(int u,int v,int len){
	idx++;
	a[idx]={v,len,pre[u]};
	pre[u]=idx;
}
int main(){
	cin>>n>>m>>k;
	cin>>s>>t;
	s++,t++;
	for(int i=1;i<=m;i++){
		cin>>x>>y>>len;
		x++,y++;
		add(x,y,len);
		add(y,x,len);
		for(int j=1;j<=k;j++){
			add(x+n*j,y+n*j,0);
			add(y+n*j,x+n*j,0);
			add(x+n*(j-1),y+n*j,len);
			add(y+n*(j-1),x+n*j,len);
		}
	}
	memset(dis,0x3f,sizeof(dis));
	q.push({0,s});
	dis[s]=0;
	while(!q.empty()){
		pp h=q.top();
		q.pop();
		int d=h.first,mi=h.second;
		if(!vis[mi]){
			vis[mi]=true;
			for(int i=pre[mi];i!=0;i=a[i].next){
				int to=a[i].to;
				if(d+a[i].len<dis[to]){
					dis[to]=d+a[i].len;
					q.push({dis[to],to});
				}
			}
		}
	}
	int mi=INT_MAX;
	for(int i=0;i<=k;i++){
		mi=min(mi,dis[t+i*n]);
	}
	cout<<mi;
	return 0;
}



