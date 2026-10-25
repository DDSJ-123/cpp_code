#include<bits/stdc++.h>
using namespace std;
const int N=105;
int n,e;
int a[N][N];
int b[N];
int js=0;
int ma,s,l;
int bj[N];
void dfs(int z){
	for(int i=1;i<=n;i++){
		if(a[z][i]==1){
			a[z][i]=0;
			a[i][z]=0;
			dfs(i);
		}
	}
	l++;
	bj[l]=z;
}
int main(){
	cin>>n>>e;
	for(int i=1;i<=e;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
		b[x]++;
		b[y]++;
	}
	s=1;
	for(int i=n;i>0;i--){
		if(b[i]%2==1){
			s=i;
			break;
		}
	}
	dfs(s);
	for(int i=l;i>0;i--){
		cout<<bj[i]<<" ";
	}
	return 0;
}



