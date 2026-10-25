#include<bits/stdc++.h>
using namespace std;
long long n;
int a[10000005];
int p=1;
int s=2; 
bool bj=false;
int main(){
	cin>>n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			bj=true;
			break;
		}
	}
	if(!bj){
		cout<<n;
		return 0;
	}
	bj=false;
	while(n>=1){
		if(n%s==0){
			a[p]++;
			n/=s;
		}else{
			if(a[p]!=0){
				if(bj){
					cout<<" * ";
				}
				if(a[p]>1) cout<<s<<"^"<<a[p];
				else cout<<s;
				bj=true;
			}
			p++;
			s++;
		}
	} 
	if(a[p]!=0){
		if(bj){
			cout<<" * ";
		}
		if(a[p]>1) cout<<s<<"^"<<a[p];
		else cout<<s;
		bj=true;
	}
	return 0;
}
