#include<bits/stdc++.h>
using namespace std;
int n;
int a[21]; 
int main(){
	cin>>n;
	a[1]=3;
	a[2]=7;
	for(int i=3;i<=n;i++){
		a[i]=((i-2)*2+1)*3+4;
	}
	cout<<a[n];
	return 0;
}

