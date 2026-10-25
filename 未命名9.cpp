#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
	getline(cin,a);
	if(a=="int" || a=="double" || a=="cout" || a=="cin"){
		cout<<"no";
		return 0;
	}else{
		if(isdigit(a[0])){
			cout<<"no";
			return 0;
		}
		for(int i=0;i<=a.size()-1;i++){
			if(isdigit(a[i]) || islower(a[i]) || isdigit(a[i]) || a[i]=='_'){
				continue;
			}
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
}

