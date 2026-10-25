#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==4){
		cout<<4;
	}
	else if(n%3==1){
			cout<<n/3+1;
	}
	else if(n%3==2){
			cout<<n/3+2;
	}
	else{
			cout<<n/3;
	}
	return 0;
} 
