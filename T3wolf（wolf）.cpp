#include<bits/stdc++.h>
using namespace std;
int n,s1,n1;
string s;
int main(){
	cin>>s;
	n=s.find('w');
	if(n==-1){
		cout<<0;
	}else{
	
		while(n!=-1){
			s.erase(n,1);
			n1=s.find('o',n);
			if(n1==-1){
				break;
			}
			s.erase(n1,1);
			n1=s.find('l',n);
			if(n1==-1){
				break;
			}
			s.erase(n1,1);
			n1=s.find('f',n);
			if(n1==-1){
				break;
			}
			s.erase(n1,1);
			s1++;
			n=s.find('w');
		}
		cout<<s1;
	}
	
	return 0;
}


