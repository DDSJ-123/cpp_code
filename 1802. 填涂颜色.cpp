#include<bits/stdc++.h>
using namespace std;
int n;
int a[35][35];
int fx[9]={0,1,0,-1,0,1,1,-1,-1};
int fy[9]={0,0,1,0,-1,1,-1,1,-1};
void dfs(int x,int y,int k){
	if(x>0 && y>0 && x<=n && y<=n && a[x][y]==0){
		a[x][y]=k;
		for(int i=1;i<=8;i++){
			dfs(x+fx[i],y+fy[i],k);
		}
	}
}
int pd(int i,int j){
	int sum=0;
	for(int k=1;k<i;k++){
		if(a[k][j]==1){
			sum++;
			break;
		}
	}
	for(int k=1;k<j;k++){
		if(a[i][k]==1){
			sum++;
			break;
		}
	}
	for(int k=i+1;k<=n;k++){
		if(a[k][j]==1){
			sum++;
			break;
		}
	}
	for(int k=j+1;k<=n;k++){
		if(a[i][k]==1){
			sum++;
			break;
		}
	}
	return sum;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int x=0,y=0;
	for(int i=2;i<n;i++){
		for(int j=2;j<n;j++){
			if(a[i][j]!=1){
				int sum=0;
				sum=pd(i,j);
				if(sum==4){
					x=i;
					y=j;
					break;
				}
			}
		}
	}
	dfs(x,y,2);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}



