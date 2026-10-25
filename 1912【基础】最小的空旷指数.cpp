#include<bits/stdc++.h>
using namespace std;
int lc,n,k,ma=0;
int a[100005];
bool check(int mid){
	int kk=k;
	for(int i=2;i<=n;i++){
		int s=a[i]-a[i-1];
		if(s>mid){
			if(s%mid==0) kk-=(s/mid-1);
			else kk-=(s/mid);
		}
		//cout<<k<<" ";
		if(kk<0) return false;
	}
	//cout<<0<<"\n";
	return true;
} 
int main(){
	cin>>lc>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	sort(a+1,a+n+1);
	int l=1,r=ma;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(check(mid)) r=mid-1;
		else l=mid+1;
	}
	cout<<l;
	return 0;
}


