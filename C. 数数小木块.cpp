#include<bits/stdc++.h>
using namespace std;
int n,sum=1;
int a[105];
int main(){
	a[1]=1;
	cin>>n;
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+i;
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}

