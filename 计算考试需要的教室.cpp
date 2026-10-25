#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>m>>n;
	if(m%n==0){
		cout<<m/n;
	}
	else{
		cout<<m/n+1;
	}
	return 0;
}
