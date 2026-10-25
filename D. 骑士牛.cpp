#include<bits/stdc++.h>
using namespace std;
char a[155][155]; 
int q[11086][3];
int jl[155][155]; 
int n,m,t,w,qx,qy,bx,by;
int fx[9]={0,2,2,1,1,2,-2,1,-1};
int fy[9]={0,1,-1,2,-2,1,1,2,2};
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='K'){
				qx=i;
				qy=j;
			}
			if(a[i][j]=='H'){
				bx=i;
				by=j;
			}
		}
	}
	q[1][1]=qx;
	q[1][2]=qy;
	jl[q[1][1]][q[1][2]]=1;
	t=1;
	w=1;
	while(t<=w){
		for(int i=1,tx,ty;i<=8;i++){
			tx=q[t][1]+fx[i];
			ty=q[t][2]+fy[i];
			if(tx>0 && ty>0 && tx<=n && ty<=m && (a[tx][ty]=='.' || a[tx][ty]=='H') && (jl[q[t][1]][q[t][2]]+1<jl[tx][ty] || jl[tx][ty]==0)){
				w++;
				jl[tx][ty]=jl[q[t][1]][q[t][2]]+1;
				q[w][1]=tx;
				q[w][2]=ty;
			}
		}
		t++;
	}
	cout<<jl[bx][by]<<"\n";
	return 0;
}
