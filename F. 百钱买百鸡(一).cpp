#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
bool bj=false;
int main(){
	cin>>n;
	for(int i=0;i<=n/5;i++){
		for(int j=0;j<=n/3;j++){
			for(int k=0;k/3<=n;k+=3){
				if(i+k+j==n && i*5+j*3+k/3==n){
					cout<<i<<' '<<j<<' '<<k<<"\n";
					bj=true;
				}
			}
		}
	}
	if(!bj){
		cout<<"No Answer.";
	}
	return 0;
}



