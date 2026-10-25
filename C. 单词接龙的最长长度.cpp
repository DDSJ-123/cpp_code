#include<bits/stdc++.h>
using namespace std;

int n;
string sr[25];
int a[25][25];
char kt;
int f[25];
int ma;

void dfs(int z,int h){
	ma=max(ma,h);
	f[z]++;
	for(int i=1;i<=n;i++){
		if(f[i]<2 && a[z][i]!=0){
			dfs(i,h+sr[i].size()-a[z][i]);
		}
	}
	f[z]--;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sr[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int l1=sr[i].size(),l2=sr[j].size();
			for(int k=1;k<=min(l1,l2);k++){
				if(sr[i].substr(l1-k)==sr[j].substr(0,k)){
					a[i][j]=k;
					break;
				}
			}
		}
	}
	cin>>kt;
	for(int i=1;i<=n;i++){
		if(sr[i][0]==kt){
			dfs(i,sr[i].size());
		}
	}
	cout<<ma;
	return 0;
}



