#include<bits/stdc++.h>
using namespace std;
int a[35][35];
int n; 
int fx[9]={0,1,0,-1,0,1,1,-1,-1};
int fy[9]={0,0,1,0,-1,1,-1,1,-1};
void dfs(int x,int y){
	if(x>0 && y>0 && x<=n && y<=n && a[x][y]==0){
		a[x][y]=2;
		for(int i=1;i<=4;i++){
			dfs(x+fx[i],y+fy[i]);
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]==1) a[i][j]=3;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if((i==1 || i==n || j==1 ||j==n) && a[i][j]==0){
				dfs(i,j);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int s=a[i][j];
			if(s==2) cout<<0;
			if(s==3) cout<<1;
			if(s==0) cout<<2;
			cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}



