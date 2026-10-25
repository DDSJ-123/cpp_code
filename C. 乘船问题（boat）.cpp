#include<bits/stdc++.h>
using namespace std;
int n,c,a[1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>c;
	sort(a+1,a+n+1);
	int l=1,r=n,sum=0;
	while(l<=r){
		if(a[l]+a[r]<=c){
			l++;
			r--;
		}else{
			r--;
		}
		sum++;
	} 
	cout<<sum;
	return 0;
}
