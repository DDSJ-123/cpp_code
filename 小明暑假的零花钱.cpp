#include<bits/stdc++.h>
using namespace std;
int main(){
	int f;
	cin>>f;
	if(f>=90){
		cout<<f*3; 
	}
	if(f>=80 && f<90){
		cout<<f*2; 
	}
	if(f>=70 && f<80){
		cout<<f; 
	}
	if(f<70){
		cout<<50; 
	}
	return 0;
}
