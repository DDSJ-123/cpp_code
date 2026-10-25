#include<bits/stdc++.h>
using namespace std;
int n;
long long a[105];
int main(){
	cin>>n;
	a[1]=0;
	a[2]=1;
	for(int i=3;i<=n;i++){
		a[i]=(a[i-1]+a[i-2])*(i-1); 
	}
	cout<<a[n];
	return 0;
}

