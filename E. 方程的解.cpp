#include<bits/stdc++.h>
using namespace std;
int n,q;
int main(){
	cin>>n;
	q=sqrt(n);
	for(int i=1;i<=q;i++){
		for(int j=i+1;j<=q;j++){
			for(int k=j+1;k<=q;k++){
				if(i*i+j*j+k*k==n){
					cout<<i<<" "<<j<<" "<<k<<"\n";
				}
			}
		}
	}
	return 0;
}



