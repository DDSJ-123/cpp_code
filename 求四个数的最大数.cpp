#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,w,e,r;
	cin>>q>>w>>e>>r;
	if(q>w&&q>e&&q>r){
		cout<<q;
	}
	if(q<w&&w>e&&w>r){
		cout<<w;
	}
	if(e>w&&q<e&&e>r){
		cout<<e;
	}
	if(r>w&&r>e&&q<r){
		cout<<r;
	}
	return 0;
}
