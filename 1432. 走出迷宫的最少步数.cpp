#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[45][45];
int s[50][50];
int fx[5]={0,1,-1,0,0};
int fy[5]={0,0,0,1,-1};
void dfs(int x,int y,int z){
	s[x][y]=z;
	for(int i=1;i<=4;i++){
		int tx=x+fx[i],ty=y+fy[i];
		if(a[tx][ty]=='.' && s[tx][ty]>z+1){
			dfs(tx,ty,z+1);
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
	dfs(1,1,1);
	cout<<s[n][m];
	return 0;
}



