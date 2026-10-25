#include<bits/stdc++.h>
using namespace std;
int n,m,sum=0;
char a[15][15]; 
int ly[5]={0,1,0,-1,0};
int lx[5]={0,0,1,0,-1};
int jl[105][2];
bool bj[15][15];

void print(int z){
	cout<<sum<<":"<<jl[1][0]<<","<<jl[1][1];
	for(int i=2;i<=z;i++){
		cout<<"->"<<jl[i][0]<<","<<jl[i][1];
	}
	cout<<"\n";
}

void dfs(int x,int y,int z){
	jl[z][0]=x;
	jl[z][1]=y;
	if(x==n && y==m){
		sum++;
		print(z);
		return ;
	}
	
	bj[x][y]=true;
	for(int i=1;i<=4;i++){
		int tx=x+lx[i];
		int ty=y+ly[i];
		if(tx>0 && ty>0 &&tx<=n && ty<=m && a[tx][ty]!='#' && bj[tx][ty]==false){
			dfs(tx,ty,z+1);
		}
	}
	bj[x][y]=false;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}	
	dfs(1,1,1);
	if(sum==0){
		cout<<"no";
		return 0;
	}
	return 0;
}



