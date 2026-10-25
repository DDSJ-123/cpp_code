#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main(){
	cin>>s;
	cin>>n;
	int len=s.size();
	while(n){
		for(int i=0;i<len;i++){
			if(s[i]>s[i+1]){
				s.erase(i,1);
				n--;
				len--;
				break;
			}
		}
	}
	while(s[0]=='0') s.erase(0,1);
	cout<<s;
	return 0;
}



