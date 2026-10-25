#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b && a==c){
		cout<<"DB";
	}
	else if(a==b || a==c || c==b){
		cout<<"DY";
	} 
	else if(a+b>c && a+c>b && b+c>a){
		cout<<"YB";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
