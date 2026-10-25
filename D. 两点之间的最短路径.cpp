#include<bits/stdc++.h>
using namespace std;
struct pp{
	int x,y;
}l[105];
int n,m;
double a[105][105];
bool bj[105][105];
double dis[105];
bool vis[105];
int sx,sy;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l[i].x>>l[i].y;
	}
	cin>>m;
	for(int i=1,srx,sry;i<=m;i++){
		cin>>srx>>sry;
		a[srx][sry]=1.0;
		a[sry][srx]=1.0;
		bj[srx][sry]=true;
		bj[sry][srx]=true;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1.0){
				a[i][j]=sqrt((l[i].x-l[j].x)*(l[i].x-l[j].x)+(l[i].y-l[j].y)*(l[i].y-l[j].y));
			}
		}
	}
	cin>>sx>>sy;
	for(int i=1;i<=n;i++){
		dis[i]=1000000;
	}
	dis[sx]=0;
	for(int i=1;i<=n;i++){
		int mi=-1;
		for(int j=1;j<=n;j++){
			if(!vis[j] && (mi==-1 || dis[mi]>dis[j])){
				mi=j;
			}
		}
		vis[mi]=true;
		for(int j=1;j<=n;j++){
			if(!vis[j] && bj[mi][j] && dis[mi]+a[mi][j]<dis[j]){
				dis[j]=dis[mi]+a[mi][j];
			}
		}
	}
	printf("%.2f",dis[sy]);
	return 0;
}



