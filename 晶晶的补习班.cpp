#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a=0,s=100,d=0;
	for(int i=1;i<8;i++){
		cin>>n;
		if(a<n)a=n;
		if(s>n)s=n;
		d+=n;
	}
	printf("%.1f",d*1.0/7);
	cout<<" ";
	cout<<a<<" ";
	cout<<s;
	return 0;
}
