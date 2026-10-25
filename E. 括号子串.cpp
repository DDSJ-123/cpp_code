#include<bits/stdc++.h>
using namespace std;
string s;
int sum;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
    	if(s[i]==')'){
    		for(int j=0;j<i;j++){
    			if(s[j]=='(') sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}

