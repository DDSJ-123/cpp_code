#include<bits/stdc++.h>
using namespace std;
string s; 
int main(){
	cin>>s;
	for(int i=2;i<=s.size();i++){
		for(int j=0;j<=s.size()-i;j++){
			string s1=s.substr(j,i),s2=s.substr(j,i);
			reverse(s2.begin(),s2.end());
			if(s1==s2){
				cout<<s1<<"\n";
			}
		}
	}
	return 0;
}



