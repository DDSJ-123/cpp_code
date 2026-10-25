#include<bits/stdc++.h>
using namespace std;
int s(int n){
	if(n==1) return 1;
	else return s(n-1)*2+1;
}
int main(){
    int n;
    cin>>n;
    cout<<s(n);
	return 0;
}

