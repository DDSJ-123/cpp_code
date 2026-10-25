#include<bits/stdc++.h>
using namespace std;
long long a[10005];
long long n,sum;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int s=a[i];
		while(s%2==0){
			sum++;
			s/=2;
		}
	} 
	cout<<sum;
	return 0;
}


