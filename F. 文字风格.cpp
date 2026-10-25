#include<bits/stdc++.h>
using namespace std;
string sr;
string sc;
string jl;
bool bj=false;
int main(){
	cin>>sr;
	for(int i=0;i<sr.size();i++){
		if(sr[i]>='A' && sr[i]<='Z'){
			sr[i]=char(sr[i]-'A'+'a');
			if(bj){
				sc+=jl+'-';
				jl="";
			}else{
				bj=true;
			}
		}
		jl+=sr[i];
	}
	sc+=jl;
	cout<<sc;
	return 0;
}



