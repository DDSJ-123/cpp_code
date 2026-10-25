#include<bits/stdc++.h>
using namespace std;
int n;
string x,s;
int main(){
	cin>>x>>n;
	s=x;
	for(int i=1;i<n;i++){
		x=s;
		s="";
		int sum=1;
		char ans=x[0];
		for(int j=1;j<x.size();j++){
			if(x[j]==ans) sum++;
			else{
				s+=char(sum+'0');
				s+=ans;
				ans=x[j];
				sum=1;	
			}
		}
		s+=char(sum+'0');
		s+=ans;
		//cout<<s<<"\n";
	}
	cout<<s;
	return 0;
}


