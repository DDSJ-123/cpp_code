#include<bits/stdc++.h>
using namespace std;
string sr;
int a[26];
int ans; 
int main(){
	cin>>sr;
	for(int i=0;i<sr.size();i++){
		a[sr[i]-'A']++;
	}
	for(int i=0;i<26;i++){
		if(a[i]==2) ans++;
	}
	if(ans==2){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}



