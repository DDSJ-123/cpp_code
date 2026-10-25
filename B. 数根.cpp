#include<bits/stdc++.h>
using namespace std;
int n; 
int js(int a){
	if(a<10) return a;
	else{
		int s=0;
		while(a){
			s+=a%10;
			a/=10;
		}
		return js(s);
	}
}
int main(){
	cin>>n;
	cout<<js(n);
	return 0;
}



