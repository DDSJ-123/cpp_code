#include<bits/stdc++.h>
using namespace std;
bool f[100000005];
int p[100000005];
int n,sum;
int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		if(f[i]==0){
			sum++;
			p[sum]=i;
		}
		for(int j=1;i*p[j]<=n;j++){
			f[i*p[j]]=1;
			if(i%p[j]==0) break;
		} 
	}
	cout<<sum;
	return 0;
}


