#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int x,y;
int a[15][15];
int dis[15];
bool vis[15];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int ca,cb,l;
		cin>>ca>>cb>>l;
		if(a[ca][cb]==0 || a[ca][cb]>l){
			a[ca][cb]=l;
			a[cb][ca]=l;
		}
	}
	cin>>x>>y;
	memset(dis,INF,sizeof(dis));
	dis[x]=0;
	for(int i=1;i<=n;i++){
		int mi=-1;
		for(int j=1;j<=n;j++){
			if(!vis[j] && (mi==-1 || dis[j]<dis[mi])){
				mi=j;
			}
		}
		vis[mi]=true;
		for(int j=1;j<=n;j++){
			if(!vis[j] && a[mi][j]!=0 && dis[mi]+a[mi][j]<dis[j]){
				dis[j]=dis[mi]+a[mi][j];
			}
		}
	}
	if(dis[y]==INF) cout<<"No path";
	else cout<<dis[y];
	return 0;
}



