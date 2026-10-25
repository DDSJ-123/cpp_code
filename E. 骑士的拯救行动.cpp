#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[25][25];
int s[25][25];
int qsx,qsy,gzx,gzy;
int lx[5]={0,1,-1,0,0};
int ly[5]={0,0,0,1,-1};
void dfs(int y,int x,int z){
	s[y][x]=z;
	for(int i=1;i<=4;i++){
		int tx=x+lx[i],ty=y+ly[i];
		if((a[ty][tx]=='@' || a[ty][tx]=='a') && s[ty][tx]>z+1){
			dfs(ty,tx,z+1);
		}else if(a[ty][tx]=='x' && s[ty][tx]>z+2){
			dfs(ty,tx,z+2);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='a'){
				gzx=j;
				gzy=i;
			}
			if(a[i][j]=='r'){
				qsx=j;
				qsy=i;
			}
		}
	}
	for(int i=1;i<=24;i++){
		for(int j=1;j<=24;j++){
			s[i][j]=INT_MAX;
		}
	}
	dfs(qsy,qsx,0);
	if(s[gzy][gzx]!=INT_MAX){
		cout<<s[gzy][gzx];
	}else{
		cout<<"Impossible";
	}
	return 0;
}


	
