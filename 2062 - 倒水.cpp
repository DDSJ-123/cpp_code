#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100005],b[100005];
int l,r,p;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
		a[i]=b[i]-b[i-1];
	}
	while(k--){
		scanf("%d%d%d",&l,&r,&p);
		a[l]+=p;
		a[r+1]-=p;
	}
	for(int i=1;i<=n;i++){
		a[i]+=a[i-1];
		printf("%d ",a[i]);
	}
	return 0;
}
