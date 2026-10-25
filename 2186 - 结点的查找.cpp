#include<bits/stdc++.h>
using namespace std;

int n,k;

int main(){
	cin>>n;
	while(n!=0){
		cin>>k;
		if(pow(2,k-1)-1>n){
			cout<<"EMPTY\n";
		}else{
			for(int i=pow(2,k-1);i<=n && i<=pow(2,k)-1;i++){
				cout<<i<<" ";
			}
			cout<<"\n";
		}
		cin>>n;
	}
	return 0;
}



