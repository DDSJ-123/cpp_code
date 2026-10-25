#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int a[100005],b[100005];
void xs(){
	cout<<"\n";
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<"\n";
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]){
			sum++;
			int l=i+1,r=n;
			int s=l+(r-l)/2;
			while(l<=r){
				s=l+(r-l)/2;
				if(b[s]>=a[i]) r=s-1;
				else l=s+1;
			}
			swap(a[i],a[l]);
			xs();
		}
	}
	cout<<sum;
	return 0;
}


