#include<bits/stdc++.h>
using namespace std;
int main(){
	char a;
	int s=0;
	while(1){
		cin>>a;
		if(a>='0' && a<='9'){
			continue;
		}
		if(a=='#'){
			break;
		}
		s++;
	} 
	cout<<s;
	return 0;
} 
