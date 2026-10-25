#include<bits/stdc++.h>
using namespace std;
int n,m,sum,ans=0;
char a[105][105];
bool bj[105][105];
struct pp{
	int x,y;
}jl[10005];
int fx[5]={0,1,0,-1,0};
int fy[5]={0,0,1,0,-1};

void pd(int x,int y){
	if(x>=0 && y>=0 && x<=n && y<=m && bj[x][y]==true){
		bj[x][y]=false;
		for(int i=1;i<=4;i++){
			pd(x+fx[i],y+fy[i]);
		}
	}
}
void xs(){
	cout<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<bj[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n\n";
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='#'){
				ans++;
				jl[ans].x=i;
				jl[ans].y=j;
				bj[i][j]=true;
			}
		}
	}
	for(int i=1;i<=ans;i++){
		if(bj[jl[i].x][jl[i].y]==true){
			sum++;
			pd(jl[i].x,jl[i].y);
		}
	}
	cout<<sum;
	return 0;
}



