#include<bits/stdc++.h>
using namespace std;
int n,a[110],k,t;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=k;i++){
		cin>>t;
		cout<<a[t]<<" ";
	}
	return 0;
}

