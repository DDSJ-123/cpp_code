#include<bits/stdc++.h>
using namespace std;
long long s(long long x,long long d){
	if(d%x==0) return x;
	else return s(d,d%x);
}
int main(){
    long long m,n;
    cin>>m>>n;
    long long x=min(m,n),d=max(m,n);
    cout<<s(x,d);
	return 0;
}

