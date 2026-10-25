#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
	getline(cin,a);
	if(isdigit(a[0])){
		cout<<"no";
		return 0;
	} 
	if(a=="int" || a=="double" || a=="cin" || a=="cout"){
		cout<<"no";
		return 0;
	}
	for(int i=0;i<a.size();i++){
		if(a[i]==' '){
			cout<<"no";
			return 0;
		} 
		if(a[i]=='_'){
			continue;
		}else if(isalpha(a[i])){
			continue;
		}else if(isdigit(a[i])){
			continue;
		}else{
			cout<<"no";
			return 0;
		} 
	}
	cout<<"yes";
	return 0;
}

