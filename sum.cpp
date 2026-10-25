#include<bits/stdc++.h>
using namespace std;
string s;
long long sum=1,ans,a,top,s1; 
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	cin>>s;
	for(int i=0,j=s.size();i<s.size();i++,j--){
		s1*=10;
		s1+=int(s[i]-'0');
		sum+=i;
		if(s[i]=='0') sum-=j;
		if(s[i+1]=='0'){
			a=1;
			for(int j=2;j=j;j++){
				if(i+j==s.size()){
					break;
				}
				if(s[i+j]=='0'){
					a++;
				}else{
					break;
				}
			}
			ans=ans+pow(10,a)*int(s[i]-'0');
		}else{
			ans+=int(s[i]-'0');
		}
		
	}
	cout<<sum<<endl<<s<<" "<<ans<<" "<<s1+ans; 
	return 0;
}

