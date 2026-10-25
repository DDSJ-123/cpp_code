#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y,s;
	cin>>x>>y;
	s=y-x+1;
	if(x%2==0 || y%2==1){
		cout<<s/2+1;
	}else{
		cout<<s/2;
	}
	return 0;
}
