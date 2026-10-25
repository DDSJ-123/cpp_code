#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=100){
		cout<<n*2;
	}
	else{
		cout<<(n-100)+200;
	}
	return 0;
}
