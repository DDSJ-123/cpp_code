#include<bits/stdc++.h>
using namespace std;
int n,m,sum;
string zh="0123456789ABCDEF";
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	int s1=pow(i,2);
    	string s="";
    	while(s1!=0){
    		s+=zh[s1%m];
    		s1/=m;
		}
		string s2=s;
		reverse(s.begin(),s.end());
		if(s2==s){
			sum++;
			//cout<<s<<endl;
		}
	}
	cout<<sum;
	return 0;
}

