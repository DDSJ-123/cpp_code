#include<bits/stdc++.h>
using namespace std;
int n,m,sum;
int xx,yy;
char a[25][25];
bool bj[25][25];
int jl[5]={0,1,-1,0,0};
int jl2[5]={0,0,0,1,-1};
void dfs(int x,int y){
	if(x>0 && y>0 && x<=n && y<=m && bj[x][y]==false){
		sum++;
		bj[x][y]=true;
		for(int i=1;i<=4;i++){
			dfs(x+jl[i],y+jl2[i]);
		}
	}
} 
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='@'){
				xx=i;
				yy=j;
			}	
			if(a[i][j]=='#'){
				bj[i][j]=true;
			}
		}
	}
	dfs(xx,yy);
	cout<<sum;
	return 0;
}



