#include<bits/stdc++.h>
using namespace std;
int sum,q,p,n;
int z[1000005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q>>p;
		z[i]=q*p;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(z[i]==z[j]) sum++;
		}
	}
	cout<<sum;
	return 0;
}



