#include<bits/stdc++.h>
using namespace std;

string qx;
string zx;

char a[505];

void js(string q,string z,int i){
	if(q.size()==0 || z.size()==0) return ;
	char c=q[0];
	int cw=z.find(c);
	a[i]=c;
	
	string cq=q.substr(1,cw);
	string cz=z.substr(0,cw);
	js(cq,cz,i*2);
	
	cq=q.substr(cw+1);
	cz=z.substr(cw+1);
	js(cq,cz,i*2+1);
}

void hx(int z){
	if(a[z]>='A' && a[z]<='z'){
		hx(z*2);
		hx(z*2+1);
		cout<<a[z];
	}
}

int main(){
	cin>>qx>>zx;
	js(qx,zx,1);
	hx(1);
	return 0;
}



