#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int m; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	sort(a+1,a+n+1);
	int l=1,r=n;
	while(l<r){
		if(a[l]+a[r]==m){
			cout<<a[l]<<" "<<a[r];
			return 0;
		}
		if(a[l]+a[r]>m) r--;
		else l++;
	}
	cout<<"No";
	return 0;
}



