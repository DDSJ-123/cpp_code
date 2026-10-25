#include<bits/stdc++.h>
using namespace std;
int n,sum;
string s;
int js2(int lo){
	int llo=0;
	while(lo!=0){
		llo+=lo%10;
		lo/=10;
	}
	return llo;
}
int js(int lo){
	int llo=lo*7;
	if(llo<=9) return llo;
	else{
		while(llo>9){
			llo=js2(llo);
		}
		return llo;
	}
}
int main(){
	cin>>n;
	while(n--){
		sum=0;
		cin>>s;
		for(int i=s.size()-1;i>=0;i-=2){
			s[i]=js(s[i]-'0')+'0';
		}
		//cout<<s<<"\n";
		for(int i=0;i<s.size();i++){
			sum+=int(s[i]-'0');
		}
		if(sum%8==0){
			cout<<"T";
		}else{
			cout<<"F";
		}
		cout<<"\n";
	} 
	return 0;
}


