#include<bits/stdc++.h>
using namespace std;
int n,ma=0,mi=INT_MAX;
int a[105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	for(int i=1;i<=ma;i++){
		int sum=0;
		for(int j=1;j<=n;j++){
			sum+=((a[j]-i)*(a[j]-i));
		}
		mi=min(mi,sum);
	}
	cout<<mi;
	return 0;
}



