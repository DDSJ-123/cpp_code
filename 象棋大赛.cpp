#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>=8&&n<=30){
		if(n>=15&&n<=30){
			cout<<"qingnianzu";
		}
		if(n>=11&&n<=14){
			cout<<"shaonianzu";	
		}
		if(n>=8&&n<=10){
			cout<<"ertongzu";
		}
	}
	return 0;
}
