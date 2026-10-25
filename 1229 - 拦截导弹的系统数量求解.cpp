#include<bits/stdc++.h>
using namespace std;
int n,a[1005],b[1005],sum;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		bool bj=true;
		for(int j=1;j<=sum;j++){
			if(b[j]>=a[i]){
				b[j]=a[i];
				bj=false;
				break;
			}
		}
		if(bj){
			sum++;
			b[sum]=a[i];
		}
	}
	cout<<sum;
	return 0;
}


