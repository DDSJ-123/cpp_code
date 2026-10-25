#include<bits/stdc++.h>
using namespace std;
int n;
struct pp{
	int t,e;
}a[1005]; 
bool cmp(pp l,pp lz){
	if(l.e!=lz.e) return l.e<lz.e;
	else return l.t<lz.t;
}
bool pd(int sz){
	for(int i=1;i<=n;i++){
		if(sz+a[i].t>a[i].e) return false;
		sz+=a[i].t;
	}
	return true;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].t>>a[i].e;
	}
	sort(a+1,a+n+1,cmp);
	if(pd(0)==false){
		cout<<"-1";
		return 0;
	}
	int l=0,r=a[1].e-a[1].t;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(pd(mid)) l=mid+1;
		else r=mid-1;
	}
	cout<<l-1;
	return 0;
}



