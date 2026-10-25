#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
int a[1005][1005];
int dis[1005];
bool vis[1005];
int n,m,s,t;
int jl[1005];
void sc(int z){
	if(jl[z]!=0){
		sc(jl[z]);
	}
	cout<<z<<" ";
}
int main(){
	cin>>n>>m>>s>>t;
	for(int i=1;i<=m;i++){
		int x,y,l;
		cin>>x>>y>>l;
		if(a[x][y]==0 || l<a[x][y]){
			a[x][y]=l;
			a[y][x]=l;			
		}

	}
	memset(dis,INF,sizeof(dis));
	dis[s]=0;
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
				jl[j]=mi;
			}
		}
	}
	if(dis[t]==INF) cout<<"can't arrive";
	else{
		cout<<dis[t]<<"\n";
		sc(t);
	}
	return 0;
}



