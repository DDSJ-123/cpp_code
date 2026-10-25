#include<bits/stdc++.h>
using namespace std;
int x,y,t; 
int main(){
	cin>>x>>y>>t;
	if(x>y && t+24>x && t<y){
		cout<<"NO";
	}else if(t>x && t<y){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
	return 0;
}



