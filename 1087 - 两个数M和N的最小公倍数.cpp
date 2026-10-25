#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
	if(a%b==0){
		return b;
	}
	return gcd(b,a%b);
} 
long long m,n;
int main(){
	cin>>m>>n;
	cout<<m/gcd(m,n)*n;
	return 0;
}



