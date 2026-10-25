#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
typedef pair<long long,int> pp;
priority_queue<pp,vector<pp>,greater<pp>> q;
struct node{
	int to,next;
	long long len;
}a[N];
int pre[N],idx,c[N];
bool vis[N];
long long dis[N];
int n,m,a1,b1;
long long x,y,len,sum;
void add(int u,int v,long long len){
	idx++;
	a[idx]={v,pre[u],len};
	pre[u]=idx;
}
int main(){
	cin>>n>>m>>a1>>b1;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=m;i++){
		cin>>x>>y>>len;
		add(x,y,len);
		add(y,x,len);
	}
	memset(dis,0x3f,sizeof(dis));
	q.push({0,b1});
	dis[b1]=0;
	while(q.size()!=0){
		pp h=q.top();
		q.pop();
		long long d=h.first,mi=h.second;
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
	for(int i=1;i<=n;i++){
		if(dis[i]<dis[a1]){
			sum+=c[i];
		}
	}
	cout<<sum;
	return 0;
}



