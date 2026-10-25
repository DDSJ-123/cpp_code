#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[50005];
int l=1,r=INT_MIN;
bool check(int z){
	int c=0;
	for(int i=1;i<=n;i++){
		c+=a[i]/z;
		if(c>=m){
			return true;
		}
	}
	return false;
} 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		r=max(r,a[i]);
	}
	while(l<=r){
		int mid=(l+r)/2;
		if(check(mid)){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<r;
	return 0;
}



