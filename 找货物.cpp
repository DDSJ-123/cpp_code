#include<bits/stdc++.h>
using namespace std;
int a[20][20]; 
int main(){
	int m,n,x,y;
	cin>>m>>n>>x>>y;
	for(int i=1;i<=m;i++){//行 
		for(int j=1;j<=n;j++){//列 
			cin>>a[i][j];
		}
	}
	swap(a[x],a[y]);
	for(int i=1;i<=m;i++){//行 
		for(int j=1;j<=n;j++){//列 
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

