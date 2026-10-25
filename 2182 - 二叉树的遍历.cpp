#include<bits/stdc++.h>
using namespace std;

struct pp{
	int zr,yr;
	char zm;
}a[35]; 
int n; 

void qx(int root){
	if(root==0) return ;
	cout<<a[root].zm;
	qx(a[root].zr);
	qx(a[root].yr);
}

void zx(int root){
	if(root==0) return ;
	zx(a[root].zr);
	cout<<a[root].zm;
	zx(a[root].yr);
}

void hx(int root){
	if(root==0) return ;
	hx(a[root].zr);
	hx(a[root].yr);
	cout<<a[root].zm;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].zm>>a[i].zr>>a[i].yr;
	}
	qx(1);
	cout<<"\n";
	zx(1);
	cout<<"\n";
	hx(1); 
	return 0;
}



