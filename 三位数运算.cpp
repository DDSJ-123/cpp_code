#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	printf("%.2f",((n/10%10)+(n/100))*1.0/((n%10)+(n/10%10))); 
	return 0;
} 
