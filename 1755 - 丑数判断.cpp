#include<bits/stdc++.h>
using namespace std;
int n;
int sr;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sr;
		if(sr%2==0 || sr%3==0 || sr%5==0 || sr%7==0 ||sr==1) cout<<"Y"<<"\n";
		else cout<<"N"<<"\n";
	}
	return 0;
}


