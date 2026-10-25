#include<bits/stdc++.h>
using namespace std;
int a[105][105],b[105][105];
int m,n,x;
int lx,ly;
int main(){
	cin>>n>>m>>x;
	for(int i=1;i<=x;i++){
		cin>>lx>>ly;
		b[lx][ly]=1;
	}
	a[1][1]=1;
	for(int i=2;i<=n;i++){
		if(b[i][1]==0) a[i][1]=a[i-1][1];
	}
	for(int i=2;i<=m;i++){
		if(b[1][i]==0) a[1][i]=a[1][i-1];
	}
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
			if(b[i][j]!=1){
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
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

