#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>=10000 || n<=9999999999){
		if(n<100000&&n>1000){
			cout<<"wan";
		}
		if(n<1000000&&n>100000){
			cout<<"shi wan";
		}
		if(n<10000000&&n>1000000){
			cout<<"bai wan";
		}
		if(n<100000000&&n>10000000){
			cout<<"qian wan";
		}
		if(n<1000000000&&n>100000000){
			cout<<"yi";
		}
		if(n>10000000000&&n>1000000000){
			cout<<"shi yi";
		}
	}
	return 0;
}
