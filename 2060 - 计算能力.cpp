#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int x,y; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	while(m--){
		int x,y;
		cin>>x>>y;
		cout<<a[y]-a[x-1]<<endl;
	}
	return 0;
}
