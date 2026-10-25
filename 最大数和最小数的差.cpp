#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d,s,q,w,e;
	cin>>n;
	q=n/100;
	w=n/10%10;
	e=n%10;
	if(q>w&&q>e){
		d=q;
	}
	if(w>q&&w>e){
		d=w;
	}
	if(e>w&&e>q){
		d=e;
	}
	if(q<w&&q<e){
		s=q;
	}
	if(w<q&&w<e){
		s=w;
	}
	if(e<w&&e<q){
		s=e;
	}
	cout<<d-s;
	return 0;
}
