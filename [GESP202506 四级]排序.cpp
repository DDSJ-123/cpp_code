#include<bits/stdc++.h>
using namespace std;
long long h[3005],w[3005],sum;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i]>>w[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(h[i]<h[j] || h[i]==h[j] && w[i]<w[j]) sum++;
		}
	} 
	cout<<sum;
	return 0;
}


