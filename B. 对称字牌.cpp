#include<bits/stdc++.h>
using namespace std;

string sr;
int a;

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>sr;
	for(int i=0,j=sr.size()-1;i<sr.size();i++,j--){
		if(sr[i]!=sr[j]) a++;
	}
	if(sr.size()%2==0){
		cout<<a/2-1;
	}else{
		cout<<a/2;
	}
	return 0;
}



