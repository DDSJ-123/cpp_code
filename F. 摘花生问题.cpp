#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105][105]; 
void xs(){
	cout<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<' ';
		} 
		cout<<"\n";
	} 
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i!=1 && j!=1){
				a[i][j]+=max(a[i-1][j],a[i][j-1]);
			}else if(j==1){
				a[i][j]+=a[i-1][j];
			}else{
				a[i][j]+=a[i][j-1];
			}
			//xs();
		}
	}
	cout<<a[n][m];
	return 0;
}

