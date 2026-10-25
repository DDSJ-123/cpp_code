#include<bits/stdc++.h>
using namespace std;
int main(){
	char n;
	cin>>n;
	if(int(n)<123 && int(n)>=97){
		cout<<char(n-32);
	} 
	if(int(n)<91 && int(n)>=65){
		cout<<char(n+32);
	}
	return 0;
}
