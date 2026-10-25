#include<bits/stdc++.h>
using namespace std;
int n,m,ma=0;
struct pp{
	int l,s;
}a[10005]; 
bool check(int mid){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+(a[i].l/mid)*a[i].s;
	}
	if(sum>=m) return true;
	else return false;
}
int main(){
	cin>>n>>m>>a[1].l>>a[1].s;
	for(int i=2;i<=n;i++){
		a[i].l=((a[i-1].l*37011+10193)%10000)+1;
		a[i].s=((a[i-1].s*73011+24793)%100)+1;
		ma=max(ma,a[i].l);
	} 
	int l=1,r=ma;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(check(mid)) l=mid+1;
		else r=mid-1;
	}
	cout<<l-1;
	return 0;
}


