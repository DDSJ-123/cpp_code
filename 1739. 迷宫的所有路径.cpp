#include<bits/stdc++.h>
using namespace std;
char a[50][50];
int r[500][3];
int n;
int fy[5]={0,1,0,-1,0};
int fx[5]={0,0,1,0,-1};
void print(int z){
	for(int i=1;i<z;i++){
		cout<<"("<<r[i][1]<<","<<r[i][2]<<")->"; 
	}
	cout<<"("<<r[z][1]<<","<<r[z][2]<<")\n";
}
void dfs(int x,int y,int z){
	r[z][1]=x;
	r[z][2]=y;
	if(x==n && y==n){
		print(z);
		return ;
	}
	for(int i=1,tx,ty;i<=4;i++){
		tx=x+fx[i];
		ty=y+fy[i];
		dfs(tx,ty,z+1);
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]='0';
		}
	}
	dfs(1,1,1);
	return 0;
}



