#include<bits/stdc++.h>
using namespace std;
int n,m,ma;
int a[110][110],d[110][110];
int fx[4]={0,1,0,-1};
int fy[4]={1,0,-1,0}; 
int dfs(int x,int y){
	if(d[x][y]!=0){
		return d[x][y];
	}
	int ans=0;
	for(int i=0;i<4;i++){
		int tx=fx[i]+x;
		int ty=fy[i]+y;
		if(tx>=1 && ty>=1 && tx<=n && ty<=m && a[tx][ty]<a[x][y]){
			ans=max(ans,dfs(tx,ty)+1);
		}
	}
	return ans;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			d[i][j]=dfs(i,j);
			ma=max(ma,d[i][j]);
		}
	}
	cout<<ma+1;
	return 0;
}



