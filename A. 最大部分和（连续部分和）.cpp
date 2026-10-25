#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
int ma=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		a[i]=max(a[i]+a[i-1],a[i]);
		ma=max(a[i],ma);
	}
	cout<<ma;
	return 0;
}



