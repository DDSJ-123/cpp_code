#include<bits/stdc++.h>
using namespace std;
string sr;
queue<string> q;
int main(){
	while(1){
		cin>>sr;
		if(sr=="PUSH") cin>>sr,q.push(sr);
		if(sr=="POP"){
			if(q.size()==0) cout<<"EMPTY";
			else{
				cout<<q.front();
				q.pop();
			}
			cout<<"\n";
		}
		if(sr=="END") break;
	}
	return 0;
}


