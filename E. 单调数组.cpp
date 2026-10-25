#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005],b1[100005],b2[100005],y,e,mi=INT_MAX; 
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==1) b1[i]++;
		b1[i]+=b1[i-1];
	}
	for(int i=n;i>0;i--){
		if(a[i]==2) b2[i]++;
		b2[i]+=b2[i+1];
		mi=min(mi,abs((i-b1[i])+(n-i-b2[i])));
	}
	cout<<mi;
	return 0;
}


