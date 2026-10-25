#include<bits/stdc++.h>
using namespace std;
int sr,n;
queue<int> q;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sr;
		q.push(sr);
	}
	while(q.size()!=0){
		cout<<q.front()<<" ";
		q.pop();
		if(q.size()!=0) q.push(q.front()),q.pop();
	}
	return 0;
}


