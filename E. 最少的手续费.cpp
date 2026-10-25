#include<bits/stdc++.h>
using namespace std;
int n,m;
int x,y;
double a[2005][2005];
double dis[2005];
bool vis[2005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int ca,cb;
		double l;
		cin>>ca>>cb>>l;
		l=1-l*0.01;
		if(a[ca][cb]==0 || a[ca][cb]<l){
			a[ca][cb]=l;
			a[cb][ca]=l;
		}
	}
	cin>>x>>y;
	for(int i=1;i<=n;i++){
		dis[i]=0;
		vis[i]=false;
	}
	dis[x]=1;
	for(int i=1;i<=n;i++){
		int mi=-1;
		for(int j=1;j<=n;j++){
			if(!vis[j] && (mi==-1 || dis[j]>dis[mi])){
				mi=j;
			}
		}
		vis[mi]=true;
		for(int j=1;j<=n;j++){
			if(!vis[j] && a[mi][j]>0 && dis[mi]*a[mi][j]>dis[j]){
				dis[j]=dis[mi]*a[mi][j];
			}
		}
	}
	printf("%.8f",100.0/dis[y]);
	return 0;
}
