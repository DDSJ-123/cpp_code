#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
int a[60][60];
int dis[60];
bool vis[60];
int n,s;
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
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
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(i!=s){
			if(dis[i]==INF){
				cout<<"-1 ";
			}else{
				cout<<dis[i]<<" ";
			}
		}
	}
	return 0;
}



