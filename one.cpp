#include<bits/stdc++.h>
using namespace std;

string n;
int ans;

int main(){
	
	freopen("one.in","r",stdin);
	freopen("one.out","w",stdout);
	
	cin>>n;
	for(int i=0;i<n.size();i++){
		ans+=(i+1);
	}
	cout<<ans;
	return 0;
}



