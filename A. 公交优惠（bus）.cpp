#include<bits/stdc++.h>
using namespace std;
int n;
int a[3],b[3];
int ma=0; 
int main(){
	cin>>n;
	for(int i=0;i<3;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<3;i++){
		if(a[i]<=n) ma=max(ma,b[i]);
	}
	cout<<n-ma;
	return 0;
}



