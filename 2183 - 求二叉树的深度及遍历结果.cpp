#include<bits/stdc++.h>
using namespace std;

int n;
int a[205]; 

int js(){
	int z=0;
	while(n){
		n/=2;
		z++;
	}
	return z;
}

void hx(int z){
	if(a[z*2]!=0) hx(a[z*2]); 
	if(a[z*2+1]!=0) hx(a[z*2+1]); 
	cout<<z<<" ";
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<js()<<"\n";
	hx(1);
	return 0;
}



