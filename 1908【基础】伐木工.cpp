#include<bits/stdc++.h>
using namespace std;
long long a[1000005]; 
long long n,m;
bool check(long long mid){
	long long s=0;
	for(int i=1;i<=n;i++){
		if(a[i]>mid) s+=a[i]-mid;
	}
	if(s>=m) return true;
	else return false;
}
int main(){
	cin>>n>>m;
	long long ma=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	long long l=1,r=ma;
	while(l<=r){
    	int mid=(l+r)/2;
    	if(check(mid)) l=mid+1;
    	else r=mid-1; 
	}
	cout<<l-1;
	return 0;
}


