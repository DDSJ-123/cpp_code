#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<10){
		cout<<"A";
	}
	if(n>=10 && n<20){
		cout<<"B";
	}
	if(n>=20 && n<40){
		cout<<"C";
	}
	if(n>=40 && n<50){
		cout<<"D";
	}
	if(n>=50){
		cout<<"E";
	}
	return 0;
}

