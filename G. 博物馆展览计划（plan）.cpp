#include<bits/stdc++.h>
using namespace std;
string s;
int k,a[30],zd=INT_MIN;
long long sum=0;
int main(){
    cin>>s>>k;
    for(int i=1;i<=26;i++){
    	cin>>a[i];
    	if(a[i]>zd){
    		zd=a[i];
		}
	}
	int ans=1;
	for(int i=0;i<s.size();ans++,i++){
		sum=sum+a[(int(s[i]-'a')+1)]*ans;
	}
	for(int i=1;i<=k;i++,ans++){
		sum=sum+zd*ans;
	}
	cout<<sum;
	return 0;
}

