#include<bits/stdc++.h>
using namespace std;
int main(){
	double n;
	cin>>n;
	if(n>20){
		printf("%.2f",n*1.98);
	}
	else{
		printf("%.2f",n*1.68);
	}
	return 0;
}
