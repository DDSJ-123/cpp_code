#include<bits/stdc++.h>
using namespace std;
int n;
string s1;
set<string> s;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>s1;
        s.insert(s1);	
	}
	cout<<52-s.size();
	return 0;
}

