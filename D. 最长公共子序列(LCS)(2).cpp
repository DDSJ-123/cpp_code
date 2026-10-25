#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int c[100005];
int dp[100005];
int len=1;
int n; 
void jh(int l,int r,int z){
	while(l<=r){
		int mid=(l+r)/2;
		if(z<=dp[mid]){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	dp[l]=z;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	dp[1]=c[b[1]];
	for(int i=2;i<=n;i++){
		if(dp[len]<c[b[i]]){
			len++;
			dp[len]=c[b[i]];
		}else{
			jh(1,len,c[b[i]]);
		}
	}
	cout<<len; 
	return 0;
}



