#include<bits/stdc++.h>
using namespace std;
int t,n,sum;
int g[10005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		sum=1;
		for(int i=1;i<=n;i++) cin>>g[i];
		int l=1,r=n;
		while(l<=r){
			if(g[l]-g[r]==g[r]-g[l]){
				sum++;
				l++;
			}else{
				r--;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}



