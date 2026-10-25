#include<bits/stdc++.h>
using namespace std;
int ax,ay;
int sum=0;
int s[10][10];
int lx[9]={0,1,2,2,1};
int ly[9]={0,2,1,-1,-2};
struct pp{
	int x,y;
}a[250];
void print(int ans){
	cout<<sum<<":"<<a[1].y<<","<<a[1].x;
	for(int i=2;i<=ans;i++){
		cout<<"->"<<a[i].y<<","<<a[i].x;
	} 
	cout<<"\n";
}
void dfs(int x,int y,int w){
	a[w].x=x;
	a[w].y=y;
	if(x==ax && y==ay){
		sum++;
		print(w);
		return ;
	}
	for(int i=1;i<=4;i++){
		int tx=x+lx[i];
		int ty=y+ly[i];
		if(tx<=ax && ty<=ay && tx>=0 && ty>=0){
			dfs(tx,ty,w+1);
		}
	}
}
int main(){
	ax=8;
	ay=4;
	dfs(0,0,1);
	return 0;
}



