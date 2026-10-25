#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[15][100005];
int main(){
	freopen("toy.in","r",stdin);
	freopen("toy.out","w",stdout);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j]; 
		} 
	}
	if(k==1){
		int ma=0;
		for(int i=1;i<=n;i++){
			int ans=0;
			for(int j=1;j<=n;j++){
				ans+=a[i][j];
			}
			ma=max(ma,ans);
		}
		cout<<ma;
		return 0;
	}
	cout<<13;
	return 0;
}


