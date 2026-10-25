#include<bits/stdc++.h>
using namespace std;
int n,a[100000005],sum;
int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			sum++;
			for(int j=i;j<=n;j+=i){
				a[j]=1;
			}
		}
	}
	cout<<sum;
	return 0;
}


