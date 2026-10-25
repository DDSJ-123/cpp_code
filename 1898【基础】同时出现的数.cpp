#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	for(int i=1;i<=m;i++){
		int l=1,r=n;
		int s=l+(r-l)/2;
		while(l<=r){
			if(a[s]==b[i]){
				cout<<b[i]<<' ';
				break;
			}
			if(a[s]>b[i]){
				r=s-1;
			}else{
				l=s+1;
			}
			s=l+(r-l)/2;
		}
	} 
	return 0;
}


