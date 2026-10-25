#include<bits/stdc++.h>
using namespace std;
int n,m;
int lx,ly,zx,zy; 
char a[45][45];
int s[50][50];
int fx[5]={0,1,-1,0,0};
int fy[5]={0,0,0,1,-1};
void dfs(int x,int y,int z){
	s[x][y]=z;
	for(int i=1;i<=4;i++){
		int tx=x+fx[i],ty=y+fy[i];
		if((a[tx][ty]=='.' || a[tx][ty]=='*') && s[tx][ty]>z+1){
			dfs(tx,ty,z+1);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='@'){
				lx=i;
				ly=j;
			}
			if(a[i][j]=='*'){
				zx=i;
				zy=j;
			}
			s[i][j]=INT_MAX;
		}
	}
	dfs(lx,ly,1);
	if(s[zx][zy]==INT_MAX){
		cout<<-1;
		return 0;
	}
	cout<<s[zx][zy]-1;
	return 0;
}



