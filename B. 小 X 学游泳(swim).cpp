#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[45][45];
int s[50][50];
int fx[5]={0,1,-1,0,0};
int fy[5]={0,0,0,1,-1};
void dfs(int x,int y,int z){
	s[x][y]=z;
	for(int i=1;i<=4;i++){
		int tx=x+fx[i],ty=y+fy[i];
		int p=s[x][y]+a[tx][ty];
		if(tx>=1 && tx<=n && ty>=1 && ty<=m && s[tx][ty]>p){
			dfs(tx,ty,p);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			s[i][j]=INT_MAX;
		}
	}
	dfs(1,1,a[1][1]);
	cout<<s[n][m];
	return 0;
}



