#include<bits/stdc++.h>
using namespace std;
int r,n,a[105],ans,sum; 
int main(){
	scanf("%d%d",&n,&r);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i+=r){
		int s=0;
		for(int j=i;j<=i+r-1;j++){
			s+=a[j];
		}	
		sum=sum*2+s;
	}
	if(n%r!=0){
		int s=0;
		cout<<1; 
		for(int j=n-n/r*n;j<=n-n/r*n+r;j++){
			s+=a[j];
		}
		sum=sum*2+s;
	}
	cout<<sum;
	return 0;
}


