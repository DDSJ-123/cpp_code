#include<bits/stdc++.h>
using namespace std;
int n,s;
bool pd(int i){
	for(int j=2;j<i;j++){
		if(i%j==0) return false;
	}
	return true;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		if(pd(i)) s++;
	}
	cout<<s;
	return 0;
}


