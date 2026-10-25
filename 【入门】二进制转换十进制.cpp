#include<bits/stdc++.h>
using namespace std;
string s;
long long sum,j;
int main(){
    cin>>s;
    for(int i=s.size()-1;i>=0;i--,j++){
    	sum+=int(s[i]-'0')*pow(2,j);
	}
	cout<<sum;
	return 0;
}

