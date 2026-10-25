#include<bits/stdc++.h>
using namespace std;
int n;
int a[8];
bool bj[8];
int sr[8]; 

void print(){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<"\n";
}

void dfs(int w){
	for(int i=0;i<n;i++){
		if(!bj[i]){
			a[w]=sr[i];
			bj[i]=true;
			dfs(w+1);
			bj[i]=false;
		}
	}
	if(w==n){
		print();
		return ;
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>sr[i];
	}
	sort(sr,sr+n);
	dfs(0);
	return 0;
}



