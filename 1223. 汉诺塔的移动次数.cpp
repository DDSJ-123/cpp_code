#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int main(){
	cin>>n;
	a[1]=1;
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]*2+1;
	}
	cout<<a[n];
	return 0;
}



