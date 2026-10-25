#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N][N];
int n,e,r[N],k;
int d[N];
void dfs(int x){
	for(int i=1;i<=n;i++){
		if(a[x][i]==1){
			a[x][i]=0;
			a[i][x]=0;
			dfs(i);
		}
	}
	k++;
	r[k]=x;
}
int main(){		
	cin>>n>>e;
	int x,y;
	for(int i=1;i<=e;i++){
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;	
		d[y]++;
		d[x]++;
	}
	int s=1;
	for(int i=n;i>=1;i--){
		if(d[i]%2==1){
			s=i;
			break;
		} 
	}
	dfs(s);
	for(int i=k;i>=1;i--){
		cout<<r[i]<<" ";
	}
	return 0;
}
