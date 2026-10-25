#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,w,e,r,t,y,u;
	cin>>q>>w>>e>>r>>t>>y>>u;
	if(q%w==0){
		w=q/w*e;
	}
	else{
		w=(q/w+1)*e;
	}
	if(q%r==0){
		r=q/r*t;
	}
	else{
		r=(q/r+1)*t;
	}
	if(q%y==0){
		y=q/y*u;
	}
	else{
		y=(q/y+1)*u;
	}
	cout<<min(w,r);
	return 0;
}
