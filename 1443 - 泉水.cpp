#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],q[1000086][3];
bool bj[1005][1005];
int n,m,t,w,qx,qy;
int fx[5]={0,0,1,0,-1};
int fy[5]={0,1,0,-1,0};
int main(){
	cin>>n>>m>>qx>>qy;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	} 
	q[1][1]=qx;
	q[1][2]=qy;
	t=1;
	w=1;
	while(t<=w){
		for(int i=1,tx,ty;i<=4;i++){
			tx=q[t][1]+fx[i];
			ty=q[t][2]+fy[i];
			if(tx>0 && ty>0 && tx<=n && ty<=m && a[tx][ty]<=a[qx][qy] && !bj[tx][ty]){
				w++;
				q[w][1]=tx;
				q[w][2]=ty;
				bj[tx][ty]=true;
			}
		}
		t++;
	}
	cout<<t-2;
	return 0;
}
