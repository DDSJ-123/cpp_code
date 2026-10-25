#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[1005][1005];
int x11,x22,y11,y22;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
		}
	}
	while(k--){
		cin>>x11>>y11>>x22>>y22;
		cout<<a[x22][y22]-a[x11-1][y22]-a[x22][y11-1]+a[x11-1][y11-1]<<"\n";	
	}
	return 0;
}

