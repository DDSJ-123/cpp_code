#include<bits/stdc++.h>
using namespace std;
long long a[5000005],sum,p[5000005];
long long s,e,ans;
int main(){
	cin>>s>>e;
	for(int i=2;i<=e;i++){
		if(a[i]==0){
			sum++;
			p[sum]=i;
		}
		for(int j=1;i*p[j]<=e;j++){
			a[i*p[j]]=1;
			if(i%p[j]==0) break;
		}
	}
	/*
	for(int i=1;i<=sum;i++) cout<<p[i]<<' ';
	cout<<"\n";
	*/
	for(int i=1;i<=sum;i++){
		for(int j=i;j<=sum;j++){
			if(p[i]*p[j]>=s && p[i]*p[j]<=e) ans++; 
			if(p[i]*p[j]>e) break;
			//cout<<p[i]*p[j]<<"\n";
		}
	}
	cout<<ans;
	return 0;
}


