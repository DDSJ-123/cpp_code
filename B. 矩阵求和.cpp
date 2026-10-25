#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[205][205];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j==1){
				a[i][j]+=max(a[i-1][j],max(a[i-1][j+1],a[i-1][j+2]));
			}else if(j==2){
				a[i][j]+=max(a[i-1][j],max(a[i-1][j-1],max(a[i-1][j+1],a[i-1][j+2])));
			}else if(j==m){
				a[i][j]+=max(a[i-1][j],max(a[i-1][j-1],a[i-1][j-2]));
			}else if(j==m-1){
				a[i][j]+=max(a[i-1][j],max(a[i-1][j-1],max(a[i-1][j+1],a[i-1][j-2])));
			}else{
				a[i][j]+=max(a[i-1][j],max(a[i-1][j-1],max(a[i-1][j-2],max(a[i-1][j+1],a[i-1][j+2]))));
			}
		}
	}
	/*
	cout<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	*/
	int i=n+1,j=m/2+1;
	if(j==1){
		cout<<max(a[i-1][j],max(a[i-1][j+1],a[i-1][j+2]));
	}else if(j==2){
		cout<<max(a[i-1][j],max(a[i-1][j-1],max(a[i-1][j+1],a[i-1][j+2])));
	}else if(j==m){
		cout<<max(a[i-1][j],max(a[i-1][j-1],a[i-1][j-2]));
	}else if(j==m-1){
		cout<<max(a[i-1][j],max(a[i-1][j-1],max(a[i-1][j+1],a[i-1][j-2])));
	}else{
		cout<<max(a[i-1][j],max(a[i-1][j-1],max(a[i-1][j-2],max(a[i-1][j+1],a[i-1][j+2]))));
	}
	return 0;
}



