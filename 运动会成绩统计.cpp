#include<bits/stdc++.h>
using namespace std;
int main(){
	double n;
	cin>>n;
	if(n>0  && n<=100){
		if(n>=92.8){
			cout<<"jin";
		}
		if(n<82.1){
			cout<<"sorry";
		}
		if(n>=85.6&&n<92.8){
			cout<<"yin";
		}
		if(n>=82.1&&n<85.6){
			cout<<"tong";
		}
	}
	return 0;
}

