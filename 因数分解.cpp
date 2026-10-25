#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
	cin>>n;
	int sum=0,a=2,bj=false;
	while(n>1){
		if(n%a==0){
			sum++;
			n/=a;
		}else{
			if(sum!=0){
				if(bj){
					cout<<" * ";
					if(sum==1) cout<<a;
					else cout<<a<<" "<<sum;
				}else{
					if(sum==1) cout<<a;
					else cout<<a<<"^"<<sum;
					bj=true;
				}
			}
			sum=0;
			a++;
		}
	}
	if(sum!=0){
		if(bj){
			cout<<" * ";
			if(sum==1) cout<<a;
			else cout<<a<<" "<<sum;
		}else{
			if(sum==1) cout<<a;
			else cout<<a<<"^"<<sum;
			bj=true;
		}
	}
	return 0;
}

