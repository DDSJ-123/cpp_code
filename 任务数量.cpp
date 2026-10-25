#include<bits/stdc++.h>
using namespace std;
int n,a[105];
int main(){
	cin>>n;
	a[n]=n;
	for(int i=n-1;i>0;i--){
		a[i]=(a[i+1]+i)*2;
	}
	cout<<a[1];
	return 0;
}
