#include<bits/stdc++.h>
using namespace std;
int fz(int n){
	if(n==1 || n==2) return 1;
	else return fz(n-2)+fz(n-1);
}
int fm(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else return fm(n-1)+fm(n-2);
}
int main(){
	int n;
	double sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=fz(i)*1.0/fm(i);
	}
	printf("%.3f",sum);
	return 0;
}

