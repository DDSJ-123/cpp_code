#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005],b[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		int sr=b[i];
		int l=1,r=n,s=l+(r-l)/2;
		while(l<=r){
			if(a[s]<=sr){
				l=s+1;
			}else{
				r=s-1;
			}
			s=l+(r-l)/2;
		}
		printf("%d\n",n-r+1);
	}
	return 0;
}


