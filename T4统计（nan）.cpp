#include<bits/stdc++.h>
using namespace std;
int n,a1[105],d,d1;
string a[105],s,s1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		s1="";
		for(int j=0;j<=s.size()-1;j++){
			if(s[j]<97){
				s1=s1+char(s[j]+32);
			}else{
				s1=s1+s[j];
			}
		}
		for(int x=1;x<=n;x++){
			if(a[x]==""){
				a[x]=s1;
				a1[x]++;
				break;
			}else if(a[x]==s1){
				a1[x]++;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a1[i]>d){
			d=a1[i];
			d1=i;
		}
	}
	cout<<a[d1];
	return 0;
}

