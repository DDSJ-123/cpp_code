#include<bits/stdc++.h>
using namespace std;
int sum;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int s=0,gs=0;
		cin>>s;
		while(s){
			if(s%2==1) gs++;
			s/=2;
		}
		sum+=gs;
	}
	cout<<sum<<" ";
	if(sum%2==1) cout<<1;
	else cout<<0;
	return 0;
}

