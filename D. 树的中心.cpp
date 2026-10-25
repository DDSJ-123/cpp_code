#include<bits/stdc++.h>
using namespace std;
const int N=100005;
vector<int> a[N];
int fa[N],dep[N],n;
void dfs(int x,int f){
	fa[x]=f;
	dep[x]=dep[f]+1;
	for(int i=1;i<=n;i++){
		if(a[x][i]==1 && i!=f){
			dfs(i,x);
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	dfs(1,0);
	int x=1;
	for(int i=2;i<=n;i++){
		if(dep[i]>dep[x]) x=i;
	}
	dfs(x,0);
	int y=1;
	for(int i=2;i<=n;i++){
		if(dep[i]>dep[y]) y=i;
	} 
	cout<<dep[y]-1;
	return 0;
}



