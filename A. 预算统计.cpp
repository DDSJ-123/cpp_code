#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n;
int k;
int ans;
int a[N]; 
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[j]-a[i-1]>=k){
				ans=ans+n-j+1;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}



