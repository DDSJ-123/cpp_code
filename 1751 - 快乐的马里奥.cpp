#include<bits/stdc++.h>
using namespace std;
int a[105][105],q[10086][2];
int n,m,t,w;
int fx[5]={0,0,1,0,-1};
int fy[5]={0,1,0,-1,0};
int main(){
	cin>>n>>m;
	q[1][1]=1;
	q[1][2]=1;
	a[1][1]=1;
	t=1;
	w=1;
	while(t<=w){
		for(int i=1,tx,ty;i<=4;i++){
			tx=q[t][1]+fx[i];
			ty=q[t][2]+fy[i];
			if(tx>0 && ty>0 && tx<=n && ty<=m && a[tx][ty]==0){
				w++;
				q[w][1]=tx;
				q[w][2]=ty;
				a[tx][ty]=w; 
			}
		}
		t++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}



