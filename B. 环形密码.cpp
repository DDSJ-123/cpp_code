#include<bits/stdc++.h>
using namespace std;
string s,t,jl;
int sc;
int main(){
	cin>>s>>t;
	sc=s.size();
	for(int i=0;i<sc;i++){
		jl="";
		jl+=s.substr(i);
		jl+=s.substr(0,i);
		if(jl==t){
			cout<<min(i,sc-i)<<"\n";
			return 0;
		} 
	}
	return 0;
}



