#include<bits/stdc++.h>
using namespace std;
int n,c,ma;
int a[1000005];
bool check(int mid){
	int s=1,s1=a[1];
	for(int i=2;i<=n;i++){
		if(a[i]-s1>=mid) s++,s1=a[i];
		if(s>=c){
			return true;
		}
	}
	return false;
}
int main(){
	cin>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	sort(a+1,a+n+1); 
	int l=1,r=ma;
	while(l<=r){
    	int mid=(l+r)/2;
    	if(check(mid)) l=mid+1;
    	else r=mid-1; 
	}
	cout<<l-1;
	return 0;
}

