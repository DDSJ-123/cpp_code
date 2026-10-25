#include<bits/stdc++.h>
using namespace std;
int ax,ay;
int sum=0;
int s[10][10];
int lx[3]={0,1,0};
int ly[3]={0,0,1};
struct pp{
	int x,y;
}a[250];
void print(int ans){
	cout<<sum<<":"<<a[1].x<<","<<a[1].y;
	for(int i=2;i<=ans;i++){
		cout<<"->"<<a[i].x<<","<<a[i].y;
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
	for(int i=1;i<=2;i++){
		int tx=x+lx[i];
		int ty=y+ly[i];
		if(tx<=ax && ty<=ay){
			dfs(tx,ty,w+1);
		}
	}
}
int main(){
	cin>>ax>>ay;
	dfs(1,1,1);
	return 0;
}



