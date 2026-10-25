#include<bits/stdc++.h>
using namespace std;
int n;
int a[101][105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	}
	//cout<<"\n";
	for(int i=n-1;i>0;i--){
		for(int j=1;j<=i;j++){
			a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
			//cout<<a[i][j]<<" "<<a[i+1][j]<<" "<<a[i+1][j+1]<<"\n";
		}
	}
	/*
	cout<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	*/
	cout<<a[1][1];
	return 0;
}

