#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=0;
	while(1){
		char a;
		cin>>a;
		if(a>='a' && a<='z'){
			n++;
		}
		if(a=='0'){
			if(n==0){
				cout<<"NO";
			}else{
				cout<<n;
			}
			break;
		}
	} 
	return 0;
} 
