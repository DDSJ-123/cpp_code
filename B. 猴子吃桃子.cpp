#include<bits/stdc++.h>
using namespace std;
int a[1005]; 
int main(){
	a[1]=1;
	for(int i=2;i<=10;i++){
		a[i]=(a[i-1]+1)*2;
	}
	cout<<a[10];
	return 0;
}

