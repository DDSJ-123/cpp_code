#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000005],k; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>k;
	int l=1,r=n;
	int s=l+(r-l)/2;
	while(l<=r){
		if(a[s]==k){
			cout<<s;
			return 0;
		}
		if(a[s]>k){
			r=s-1;
		}else{
			l=s+1;
		}
		s=l+(r-l)/2;
	}
	cout<<"-1";
	return 0;
}


