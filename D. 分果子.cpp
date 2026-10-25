#include<bits/stdc++.h>
using namespace std;
int n;
int sum;
int a[10000005]; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=i+a[i-1];
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[i+j]-a[i-1]==n){
				sum++;
				for(int k=i;k<=i+j;k++){
					cout<<k<<" ";
				}
				cout<<"\n";
			}
		}
	}
	if(sum==0) cout<<"No Result";
	return 0;
}



