#include<bits/stdc++.h>
using namespace std;
int a[105][105],b[105][105];
int m,n,x,y;
int lx,ly;
void bj(){
	if(x+2<=10 && y+1<=10){
		b[x+2][y+1]=1;
	}
	if(x+2<=10 && y-1>=0){
		b[x+2][y-1]=1;
	}
	if(x-2>=0 && y+1<=10){
		b[x-2][y+1]=1;
	}
	if(x-2>=0 && y-1>=0){
		b[x-2][y-1]=1;
	}
	
	if(x+1<=10 && y+2<=10){
		b[x+1][y+2]=1;
	}
	if(x+1<=10 && y-2>=0){
		b[x+1][y-2]=1;
	}
	if(x-1>=0 && y+2<=10){
		b[x-1][y+2]=1;
	}
	if(x-1>=0 && y-2>=0){
		b[x-1][y-2]=1;
	}
}
void xs(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			cout<<b[i][j]<<' ';
		}
		cout<<"\n";
	}
	cout<<"\n";
}
int main(){
	cin>>n>>m>>y>>x;
	bj();
	xs();
	a[0][0]=1;
	for(int i=1;i<=n;i++){
		if(b[i][1]==0) a[i][1]=a[i-1][1];
	}
	for(int i=1;i<=m;i++){
		if(b[1][i]==0) a[1][i]=a[1][i-1];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(b[i][j]!=1){
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
	//xs();
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	} 
	*/
	cout<<a[n][m];
	return 0;
}

