#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int n;
int ax,ay,bx,by;
void dfs(int x,int y){
	if(a[x+1][y]==0 && x+1<=n) a[x+1][y]=2,dfs(x+1,y);
	if(a[x-1][y]==0 && x-1>0) a[x-1][y]=2,dfs(x-1,y);
	if(a[x][y+1]==0 && y+1<=n) a[x][y+1]=2,dfs(x,y+1);
	if(a[x][y-1]==0 && y-1>0) a[x][y-1]=2,dfs(x,y-1);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cin>>ax>>ay>>bx>>by;
	dfs(ax,ay);
	if(a[bx][by]==2 && a[ax][ay]==2){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}



