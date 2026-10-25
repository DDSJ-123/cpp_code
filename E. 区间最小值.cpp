#include<bits/stdc++.h>
using namespace std;
int n,a[100005],m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int s,l,mi=0;
	while(m){
		mi=INT_MAX;
		cin>>s>>l;
		for(int i=s;i<=l;i++) mi=min(mi,a[i]);
		cout<<mi<<"\n";
		m--;
	}
	return 0;
}


