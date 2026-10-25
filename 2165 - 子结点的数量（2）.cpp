#include<bits/stdc++.h>
using namespace std;
int a[105];
int n,x,y;
int main(){
	a[1]=1;
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>x>>y;
		a[x]++;
		a[y]++;
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]-1<<" ";
	}
	return 0;
}
