#include<bits/stdc++.h>
using namespace std;
int m,n,t;
int a[15][15];
int main(){
	for(int i=0;i<=10;i++){
		for(int j=1;j<=10;j++){
			if(i==0 || j==1) a[i][j]=1;
			else if(i>=j) a[i][j]=a[i-j][j]+a[i][j-1];
			else a[i][j]=a[i][i];
		}
	}
	cin>>t;
	while(t--){
		cin>>m>>n;
		cout<<a[m][n]<<"\n";
	}
	return 0;
}

