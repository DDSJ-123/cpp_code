#include<bits/stdc++.h>
using namespace std;
string s,sr,sc="",s1;
int bj=0;
void js(){
	if(bj==1){
		s1=sc;
		sc=s;
		sc+=s1;
		s="";
	}else{
		sc+=s;
		s="";
	}
}
int main(){
	cin>>sr;
	for(int i=0;i<sr.size();i++){
		if(sr[i]=='<'){
			if(bj!=0){
				js();
			}else{
				sc=s;
				s="";
			}
			bj=1;
		}else if(sr[i]=='>'){
			if(bj!=0){
				js();
			}else{
				sc=s;
				s="";
			}
			bj=2;
		}else{
			s+=sr[i];
		}
	}
	if(s!=""){
		js();
	}
	cout<<sc;
	return 0;
}



