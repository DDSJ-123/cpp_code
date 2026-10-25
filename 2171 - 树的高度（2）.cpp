#include<bits/stdc++.h>
using namespace std;
const int N=50;
int f[N],a[N][N],d[N];
int n,x,y;
int sc[N];
int ma=0;

void dfs(int x,int fa){
	f[x]=fa;
	d[x]=d[fa]+1;
	ma=max(ma,d[x]);
	for(int i=1;i<=n;i++){
		if(a[x][i]==1 && i!=fa){
			dfs(i,x);
		}
	}
}

int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	dfs(1,0);
	while(ma!=1){
		for(int i=1;i<=n;i++){
			if(d[i]==ma){
				sc[f[i]]+=sc[i]+1;
			}
		}
		ma--;
	}
	for(int i=1;i<=n;i++){
		cout<<sc[i]+1<<' '<<d[i]<<"\n";
	}
	return 0;
}



