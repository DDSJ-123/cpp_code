/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,k,mi=INT_MAX,ma=INT_MIN; 
long long x[N],d[N],a[N];
int main(){
	scanf("%lld%lld",&n,&k);
	for(int i=1;i<k;i++){
		cin>>a[i];
		mi=min(mi,a[i]);
		ma=max(ma,a[i]);
	}
	for(int i=k;i<=n;i++){
		cin>>a[i];
		mi=min(mi,a[i]);
		ma=max(ma,a[i]);
		x[i-k]=mi;
		d[i-k]=ma;
	}
	for(int i=0;i<=n-k;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<=n-k;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int q[N],h,t;
int a[N],x[N],d[N];
int n,k;
int main(){
	scanf("%d%d",&n,&k);
	h=1,t=0;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		if(h<=t && q[h]<i-k+1) h++;
		while(h<=t && a[i]<a[q[t]]) t--;
		t++;
		q[t]=i;
		if(i>=k){
			printf("%d ",a[q[h]]);
		}
	}
	h=1,t=0;
	cout<<endl;
	for(int i=1;i<=n;i++){
		if(h<=t && q[h]<i-k+1) h++;
		while(h<=t && a[i]>a[q[t]]) t--;
		t++;
		q[t]=i;
		if(i>=k){
			printf("%d ",a[q[h]]);
		}
	}
	return 0;
} 
