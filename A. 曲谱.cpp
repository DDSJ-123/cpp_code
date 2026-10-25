#include<bits/stdc++.h>
using namespace std;
int t;
string s;
bool bj[100005];

int ans;
int wz;

void dfs(int w){
	if(w>=wz && bj[wz]==true){
		ans++;
		return ;
	}
	for(int i=1;i<=2;i++){
		if(s[w]!='0' && w<=wz){
			if(i==1){
				bj[w]=true;
				dfs(w+1);
				bj[w]=false;
			}
			if(i==2 && int(s[w]-'0')*10+int(s[w+1]-'0')<=26 && int(s[w]-'0')+int(s[w+1]-'0')>0){
				bj[w]=true;
				bj[w+1]=true;
				dfs(w+2);
				bj[w]=false;	
				bj[w+1]=false;
			}
		}
		if(s[w]=='0' && !bj[w]){
			return ;
		}
	}
}
 
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		if(s[0]=='0'){
			cout<<"0\n";
			continue;
		}
		for(int i=0;i<s.size();i++) bj[i]=false;
		ans=0;
		wz=s.size()-1;
		dfs(0);
		cout<<ans<<"\n";
	}
	return 0;
}



