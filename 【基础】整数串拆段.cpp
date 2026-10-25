#include<bits/stdc++.h>
using namespace std;
string a;
long long x=INT_MAX;
int main(){
	cin>>a;
	for(int i=1;i<a.size();i++){
		long long s=stoll(a.substr(0,i));
	    long long s1=stoll(a.substr(i));
	    //cout<<s<<" "<<s1; 
	    s+=s1;
	    //cout<<" "<<s<<endl;
	    for(int j=2;j<=sqrt(s);j++){
	    	if(s%j==0){
	    		break;
			}
			if(s<x){
				//cout<<s<<endl;
			    x=s;
		    }
		}
		
	}
	if(x==INT_MAX || a=="1"){
		cout<<-1;
	}else{
		cout<<x;
	}
	return 0;
}

