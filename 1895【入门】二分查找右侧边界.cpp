#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005],t,sr;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cin>>t;
	while(t){
		scanf("%d",&sr);
		int l=1,r=n,s=l+(r-l)/2;
		while(l<=r){
			if(a[s]<=sr){
				l=s+1;
			}else{
				r=s-1;
			}
			s=l+(r-l)/2;
		}
		if(a[r]==sr) printf("%d ",r);
		else printf("-1 ");
		t--;
	}
	return 0;
}


