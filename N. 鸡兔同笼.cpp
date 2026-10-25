#include<bits/stdc++.h>
using namespace std;
int n;
int mi=INT_MAX,ma=INT_MIN; 
int main(){
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(i*2+j*4==n){
				mi=min(mi,i+j);
				ma=max(ma,i+j);
			}
		}
	}
	cout<<mi<<" "<<ma;
	return 0;
}



