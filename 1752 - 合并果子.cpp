#include<bits/stdc++.h>
using namespace std;
int n,sr;
long long sum;
priority_queue<int,vector<int>,greater<int>> q;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>sr,q.push(sr);
	while(q.size()>1){
		int s=q.top();
		q.pop();
		int s1=q.top();
		q.pop();
		sum=sum+s+s1;
		q.push(s+s1);
	}
	cout<<sum;
	return 0;
}


