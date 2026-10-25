#include<bits/stdc++.h>
using namespace std;
int n,m,t;
int a[105][105],b[105][105]; 
int main(){
	cin>>n>>m>>t;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
		}
	}
	for(int i=n-1;i>0;i--){
		for(int j=1;j<=m;j++){
			for(int p=1;p<j;p++){
				if(b[i+1][p]!=b[i][j]) a[i][j]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}



