#include<bits/stdc++.h>
using namespace std;
int t,m;
int main(){
	cin>>t;
	while(t){
		cin>>m;
		int a=0,s=0;
		while(m){
			a++;
			s=m%10;
			m/=10;
		} 
		cout<<(a-1)*9+s<<"\n";
		t--;
	}
	return 0;
}


