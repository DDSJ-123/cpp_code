#include<bits/stdc++.h>
using namespace std;
int n;
int js(int i){
	return i*i*i*i;
}
int main(){
	cin>>n;
	for(int i=1000;i<=min(n,9999);i++){
		if(js(i/1000)+js(i/100%10)+js(i/10%10)+js(i%10)==i){
			cout<<i<<" ";
		}
	}
	return 0;
}



