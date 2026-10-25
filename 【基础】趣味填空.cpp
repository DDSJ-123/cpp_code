#include<bits/stdc++.h>
using namespace std;
string a,z;
int q=0;
int main(){
	cin>>a;
	string n=a.substr(0,a.find("="));
	long long z=stoll(a.substr(a.find("=")+1));
	for(int i=1;i<n.size();i++){
		long long s=stoll(n.substr(0,i));
	    long long s1=stoll(n.substr(i));
	    if(s+s1==z){
	    	cout<<s<<"+"<<s1<<"="<<z<<endl;
	    	q=1;
	    	return 0;
		}
    }
    if(q==0){
    	cout<<"Impossible!";
	}
	return 0;
}

