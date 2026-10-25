#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N][N];
int n,e;
bool f[N];
void dfs(int x){
	f[x]=true;
	cout<<x<<" ";
	for(int i=1;i<=n;i++){
		if(a[x][i]==1 && !f[i]) dfs(i);
	}
}
int main(){
	cin>>n>>e;
	int x,y;
	for(int i=1;i<=e;i++){
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;	
	}
	dfs(1);
	return 0;
}

