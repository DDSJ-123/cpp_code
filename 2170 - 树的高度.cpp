#include<bits/stdc++.h>
using namespace std;
const int N=105;
int n;
vector<int> a[N];
int ma;

void js(int z,int c){
	ma=max(ma,c);
	for(int i=0;i<a[z].size();i++){
		js(a[z][i],c+1);
	}
}

int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		int sr_a,sr_b;
		cin>>sr_a>>sr_b;
		a[sr_a].push_back(sr_b); 
	} 
	js(1,1);
	cout<<ma;
	return 0;
}



