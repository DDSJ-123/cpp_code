#include<bits/stdc++.h>
using namespace std;
int s,f;
int main(){
	cin>>s>>f;
	if(f-45<0){
		if(s-1<0){
			cout<<23;
		}else{
			cout<<s-1;
		}
		cout<<" "<<60+f-45;
	}else{
		cout<<s<<" "<<f-45;
	}
	return 0;
}


