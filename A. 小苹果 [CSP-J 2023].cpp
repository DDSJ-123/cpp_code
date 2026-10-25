#include<bits/stdc++.h>
using namespace std;
long long n,ts,t; 
int main(){
    cin>>n;
    while(n>0){
    	ts++;
    	if(n%3==1 && t==0){
    		t=ts;
		}
		n-=1+(n-1)/3;
	}
	cout<<ts<<" "<<t;
	return 0;
}

