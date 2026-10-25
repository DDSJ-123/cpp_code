#include<bits/stdc++.h>
using namespace std;
int n;
int jl[25];
bool bj[25];

bool pd(int x,int y){
	int z=x+y;
	if(x+y<2){
		return false;
	}
	for(int i=2;i<=sqrt(z);i++){
		if(z%i==0){
			return false;
		}
	}
	return true;
}

void sc(){
	if(!pd(jl[1],jl[n])){
		return ;
	}
	for(int i=1;i<n;i++){
		if(!pd(jl[i],jl[i+1])){
			return ;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<jl[i]<<" ";
	}
	cout<<"\n";
}

void dfs(int x,int z){
	jl[z]=x;
	if(z==n){
		sc();
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!bj[i]){
			bj[i]=true;
			dfs(i,z+1);
			bj[i]=false;
		}
	}
}
 
int main(){
	cin>>n;
	bj[1]=true;
	jl[1]=1;
	dfs(1,1);
	return 0;
}



