#include<bits/stdc++.h>
using namespace std;
int n;
int a[15][15];
bool bj[15];
bool bj2;
int mi=INT_MAX;

void dfs(int z,int c){
	if(z==1){
		for(int i=2;i<=n;i++){
			if(!bj[i]){
				return ;
			}
		}
		mi=min(mi,c);
		return ;
	}
	bj[z]=true;
	for(int i=1;i<=n;i++){
		if(a[z][i]!=0 && !bj[i]){
			dfs(i,c+a[z][i]);
		}
	}
	bj[z]=false;
}
 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		if(a[1][i]!=0){
			dfs(i,a[1][i]);
		} 
	}
	if(mi==INT_MAX){
		cout<<-1;
	}else{
		cout<<mi;
	}
	return 0;
}



