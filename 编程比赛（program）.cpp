#include<bits/stdc++.h>
using namespace std;
int n,m,s;
string s1;
int ac[1000005],wa[1000005];
int df,kf;
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
    	cin>>s>>s1;
    	if(s1=="WA" && ac[s]==0) wa[s]++;
    	else ac[s]++;
	}
	for(int i=1;i<=n;i++){
		if(ac[i]){
			df++;
			kf+=wa[i];
		}
	}
	cout<<df<<" "<<kf;
	return 0;
}

