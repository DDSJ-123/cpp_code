#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pp;
const int N=1e5+10;
struct node{
	int to,len,next;
}a[N];;
int pre[N],idx;
int dis[N];
bool vis[N];
priority_queue<pp,vector<pp>,greater<pp>> q;
int n,m;
void add(int u,int v,int len){
	idx++;
	a[idx]={v,len,pre[u]};
	pre[u]=idx;
} 
int main(){
	cin>>n>>m;
	for(int i=1,x,y,len;i<=m;i++){
		cin>>x>>y>>len;
		add(x,y,len);
	}
	q.push({0,1});
	memset(dis,0x3f,sizeof(dis));
	dis[1]=0;
	while(q.size()!=0){
		pp h=q.top();
		q.pop();
		int d=h.first,mi=h.second;
		if(mi==n){
			cout<<d;
			return 0;
		}
		if(!vis[d]){
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
	cout<<-1;
	return 0;
}



