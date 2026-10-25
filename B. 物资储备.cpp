#include<bits/stdc++.h>
using namespace std;
int n,a;
int sum; 
int ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		sum+=a;
		if(sum<0){
			ans+=abs(sum);
			sum=0;
		}
	}
	cout<<ans;
	return 0;
}



