#include<bits/stdc++.h>
using namespace std;
int n,r;
int a[7];
bool bj[7];

void print(){
	for(int i=1;i<=r;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
 
void dfs(int w){
	if(w==r+1){
		print();
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!bj[i]){
			a[w]=i;
			bj[i]=true;
			dfs(w+1);
			bj[i]=false;
		}
	}
}
 
int main(){
	cin>>n>>r;
	dfs(1);
	return 0;
}



