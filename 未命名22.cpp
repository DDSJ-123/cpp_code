#include<bits/stdc++.h>
using namespace std;
string a;
char s;
int main(){
	cin>>a>>s;
	for(int i=0;i<=a.size()-1;i++){
		if(a[i]!=s){
			cout<<a[i];
		}
	}
	return 0;
}

