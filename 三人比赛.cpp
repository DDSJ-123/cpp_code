#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a<c || b<c){
		cout<<"yes";
	}
	if(c<a && c<b){
		cout<<"no";
	}
	return 0;
}

