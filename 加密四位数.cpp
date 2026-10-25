#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,w,e,r;
    cin>>n;
    q=(n/1000+5)%10;
    w=(n/100%10+5)%10;
    e=(n/10%10+5)%10;
    r=(n%10+5)%10;
    cout<<r<<e<<w<<q;
	return 0;
} 
