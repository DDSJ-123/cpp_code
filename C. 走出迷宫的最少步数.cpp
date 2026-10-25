#include<bits/stdc++.h>
using namespace std;
char a[105][105]; 
int q[10086][3];
int jl[105][105]; 
int n,m,t,w;
int fx[5]={0,0,1,0,-1};
int fy[5]={0,1,0,-1,0};
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	q[1][1]=1;
	q[1][2]=1;
	jl[q[1][1]][q[1][2]]=1;
	t=1;
	w=1;
	while(t<=w){
		for(int i=1,tx,ty;i<=4;i++){
			tx=q[t][1]+fx[i];
			ty=q[t][2]+fy[i];
			if(tx>0 && ty>0 && tx<=n && ty<=m && a[tx][ty]=='.' && (jl[q[t][1]][q[t][2]]+1<jl[tx][ty] || jl[tx][ty]==0)){
				w++;
				jl[tx][ty]=jl[q[t][1]][q[t][2]]+1;
				q[w][1]=tx;
				q[w][2]=ty;
			}
		}
		t++;
	}
	cout<<jl[n][m];
	return 0;
}
