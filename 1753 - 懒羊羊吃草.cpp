#include<bits/stdc++.h>
using namespace std;
long long n;
long long k;
char sr;
priority_queue<long long,vector<long long>,greater<long long>> q;
int main(){
	scanf("%lld",&n);
	while(n--){
		cin>>sr;
		if(sr=='q'){
			cout<<q.top()<<"\n";
			q.pop();
		}else{
			cin>>k;
			q.push(k);
		}
	}
	return 0;
}


