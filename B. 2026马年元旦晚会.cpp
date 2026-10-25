#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
long long n,mi=INT_MAX,s;
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	//for(int i=1;i<=n;i++) cout<<a[i]<<"\n";
	for(int i=1;i+s-1<=n;i++){
		mi=min(mi,a[i+s-1]-a[i]);
		//cout<<mi<<"\n";
	}
	cout<<mi;
	return 0;
}


