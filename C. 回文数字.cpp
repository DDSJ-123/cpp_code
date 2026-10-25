#include<bits/stdc++.h>
using namespace std;
int n;
bool bj=false; 
int main(){
	cin>>n;
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=9;k++){
				if(i*2+j*2+k==n){
					cout<<i*10000+j*1000+k*100+j*10+i<<"\n";
					bj=true; 
				}
			}
		}
	}
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=9;k++){
				if(i*2+j*2+k*2==n){
					cout<<i*100000+j*10000+k*1000+k*100+j*10+i<<"\n";
					bj=true;
				}
			}
		}
	}
	if(!bj){
		cout<<-1;
	}
	return 0;
}



