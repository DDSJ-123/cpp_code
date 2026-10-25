#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		long long z=0,jg=0;
		string dw1,dw2;
		char zw;
		cin>>z>>dw1>>zw>>zw>>dw2;
		jg=z;
		if(dw1=="km" || dw1=="kg") jg*=1000000;
		if(dw1=="m" || dw1=="g") jg*=1000;
		if(dw2=="m" || dw2=="g") jg/=1000;
		if(dw2=="km" || dw2=="kg") jg/=1000000;
		cout<<z<<" "<<dw1<<" "<<"="<<" "<<jg<<" "<<dw2<<endl;
	} 
	return 0;
}

