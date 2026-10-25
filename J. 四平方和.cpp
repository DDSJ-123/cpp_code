#include<bits/stdc++.h>
using namespace std;
int l[2237];
int n;
int a[4];
int jl=4;
int main(){
	cin>>n; 
	for(int i=1;i<=int(sqrt(5000000));i++){
		l[i]=i*i;
	}
	int r=0;
	while(jl!=0){
		if(l[r]>n){
			a[jl-1]=r-1;
			n-=l[r-1];
			r=0;
			jl--;
		}else{
			r++;
		}
	}
	for(int i=0;i<4;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}



