#include<bits/stdc++.h>
using namespace std;
int x,y;
int s[155][155];
char a[155][155];
int kx,ky,hx,hy;
int lx[9]={0,1,-1,1,-1,2,-2,2,-2};
int ly[9]={0,2,2,-2,-2,1,1,-1,-1};
void dfs(int x,int y,int z){
	s[x][y]=z;
	for(int i=1;i<=8;i++){
		int tx=x+lx[i];
		int ty=y+ly[i];
		if((a[tx][ty]=='.' || a[tx][ty]=='H') && s[tx][ty]>z+1){
			dfs(tx,ty,z+1);
		}
	}
}
int main(){
	cin>>y>>x;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			cin>>a[i][j];
			if(a[i][j]=='K'){
				kx=i;
				ky=j;
			}
			if(a[i][j]=='H'){
				hx=i;
				hy=j;
			}
			s[i][j]=INT_MAX;
		}	
	}
	dfs(kx,ky,0);
	cout<<s[hx][hy];
	return 0;
}



