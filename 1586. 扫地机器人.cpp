#include<bits/stdc++.h>
using namespace std;
int n,m; 
int a[15][15];
bool bj[15][15];
void dfs(int i,int j){
	if(a[i][j]==false) return ;
	if(bj[i][j+1]==false && j+1<=m){
		a[i][j+1]=a[i][j]+1;
		bj[i][j+1]=true; 
		dfs(i,j+1);
	}else if(bj[i+1][j]==false && i+1<=n){
		a[i+1][j]=a[i][j]+1;
		bj[i+1][j]=true;
		dfs(i+1,j);
	}else if(bj[i][j-1]==false && j-1>0){
		a[i][j-1]=a[i][j]+1;
		bj[i][j-1]=true;
		dfs(i,j-1);
	}else if(bj[i-1][j]==false && i-1>0){
		a[i-1][j]=a[i][j]+1;
		bj[i-1][j]=true;
		dfs(i-1,j);
	}
}
int main(){
	cin>>n>>m;
	a[1][1]=1;
	bj[1][1]=true;
	dfs(1,1); 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<setw(3)<<a[i][j];
		}
		cout<<"\n";
	}
	return 0;
}



