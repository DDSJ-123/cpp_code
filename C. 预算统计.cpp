#include<bits/stdc++.h>
using namespace std;
int n,k;
long long a[10005];
int l=1,r=1;
int ans,sum; 
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ans=a[1];
	while(l<=n && r<=n){
		if(ans>=k){
			sum++;
			cout<<l<<" "<<r<<"\n";
			ans-=a[l];
			l++;
		}else if(r<=n){
			while(ans<k && r<=n){
				r++;
				ans+=a[r];
			}
		}	
	}
	cout<<sum;
	return 0;
} 



