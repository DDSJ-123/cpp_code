#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105][105]; 
bool bj2;
int sx,sy;
int ex,ey;
int tx[4]={0,-1,0,1};
int ty[4]={-1,0,1,0};
bool bj[105][105]; 

struct pp{
	int x,y;
}b[10005];

void sc(int z){
	cout<<'('<<sx<<','<<sy<<')';
	for(int i=2;i<=z;i++){
		cout<<"->("<<b[i].x<<','<<b[i].y<<')';
	}
	cout<<"\n";
}

void dfs(int x,int y,int z){
	bj[x][y]=true;
	b[z].x=x;
	b[z].y=y;
	if(x==ex && y==ey){
		bj2=true;
		sc(z);
	}
	for(int i=0;i<4;i++){
		int lx=x+tx[i];
		int ly=y+ty[i];
		if(lx>0 && lx<=n && ly>0 && ly<=m && a[lx][ly]==1 && !bj[lx][ly]){
			dfs(lx,ly,z+1);
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
	cin>>sx>>sy;
	cin>>ex>>ey;
	dfs(sx,sy,1);
	if(!bj2){
		cout<<"-1";
	}
	return 0;
} 



