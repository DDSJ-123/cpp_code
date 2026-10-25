#include<bits/stdc++.h>
using namespace std;
int n,e;
int a[15][15];
bool bj[15];
int x,y;
void dfs(int z){
	bj[z]=true;
	cout<<z<<" ";
	for(int i=1;i<=n;i++){
		if(a[z][i]==1 && !bj[i]){
			dfs(i);
		}
	}
}
int main(){
	cin>>n>>e;
	for(int i=1;i<=e;i++){
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	dfs(1);
	return 0;
}



