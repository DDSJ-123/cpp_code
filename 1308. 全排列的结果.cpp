#include<bits/stdc++.h>
using namespace std;
int n;
bool bj[10];
int a[10];

void print(int z){
	for(int i=1;i<=z;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

void dfs(int i,int z){
	a[z]=i;
	if(z==n){
		print(z);
		return ;
	}
	for(int j=1;j<=n;j++){
		if(!bj[j]){
			bj[j]=true;
			dfs(j,z+1);
			bj[j]=false;
		}
	}	
}

int main(){
	cin>>n;
	dfs(0,0);
	return 0;
}



