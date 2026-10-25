#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,m=0;
	cin>>n;
	for(int i=1;i<=n;i+=2){
		m+=1.0/i;
	}
	printf("%.3f",m); 
	return 0;
}
