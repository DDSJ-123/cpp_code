#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=2;i<=n-1;i++){
		for(int j=2;j<=m+1;j++){
			int q=a[i][j];
			if(q>a[i-1][j]&&q>a[i+1][j]&&q>a[i][j+1]&& q>a[i][j-1]){
				cout<<q<<endl;
			} 
		} 
	}
	return 0;
}

