#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>s;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j]<a[i]){
				int l=a[j];
				a[j]=a[i];
				a[i]=l;
			}
		}
	}
	cout<<a[s-1];
	return 0;
} 
