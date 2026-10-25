#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
    if(x%4==0){
    	cout<<"0 "<<"0 "<<x/4;
	} 
	else if(x%4==1){
		cout<<"0 "<<"1 "<<x/4-1; 
	}
	else if(x%4==2){
		cout<<"1 "<<"0 "<<x/4-1;
	}
	else{
		cout<<"1 "<<"1 "<<x/4-2;
	}
	
	return 0;
} 
