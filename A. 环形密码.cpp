#include<bits/stdc++.h>
using namespace std;
int sum,sum2;
int s2s;
string s1,s2,s3,s4;
int main(){
	cin>>s1>>s2;
	s4=s2;
	s2s=s2.size()-1;
	while(s1!=s2){
		sum++;
		s3=s2[s2s];
		s3+=s2.substr(0,s2s);
		s2=s3;
	}
	s2=s4;
	while(s1!=s2){
		sum2++;
		s3=s2[0];
		s2=s2.substr(1,s2s);
		s2+=s3;
	}
	cout<<min(sum,sum2);
	return 0;
}



