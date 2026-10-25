#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int a[105],b[105]; 
int main(){
	cin>>x>>y>>z; 
	for(int i=1;i<=x;i++){
		a[i]=1;
		b[i]=0;
	}
	for(int i=x+1;i<=z;i++){
		b[i]=a[i-x]*y;
		a[i]=a[i-1]+b[i-3];
	}
	cout<<a[z];
	return 0;
}

