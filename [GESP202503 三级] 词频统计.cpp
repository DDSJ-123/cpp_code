#include<bits/stdc++.h>
using namespace std;
int n,z,max1;
string maxstr;
struct q{
	string a;
	int n;
}a[100000];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		string s,s1;
		cin>>s;
		for(int j=0;j<s.size();j++){
			if(s[j]>='A' && s[j]<='Z'){
				s1+=char(s[j]+32);
			}else{
				s1+=s[j];
			}
		}
		bool bj=false;
		for(int j=1;j<=z;j++){
			if(a[j].a==s1){
				a[j].n++;
				bj=true;
				break;
			}
		}
		if(bj==false){
			z++;
			a[z].a=s1;
			a[z].n=1;
		}
	}
	for(int i=1;i<=z;i++){
		if(a[i].n>max1){
			max1=a[i].n;
			maxstr=a[i].a;
		}
	}
	/*
	for(int i=1;i<=z;i++){
		cout<<a[i].a<<" "<<a[i].n<<endl;
	}
	*/
	cout<<maxstr;
	return 0;
}

