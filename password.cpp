#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int a[26];
int b[26];
int zq;
int s1_ans;
int mi;

int main(){
	
	freopen("password.in","r",stdin);
	freopen("password.out","w",stdout);
	
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(a[s1[i]-'a']==0) s1_ans++;
		a[s1[i]-'a']++;
	}
	int l=0,r=0;
	while(zq!=s1_ans && r<s2.size()){
		b[s2[r]-'a']++;
		if(b[s2[r]-'a']==a[s2[r]-'a']) zq++;
		r++;
	}
	r=max(r-1,0);
	mi=r-l+1;
	while(l<=r && r<s2.size()){
		if(b[s2[l]-'a']==a[s2[l]-'a']) zq--;
		b[s2[l]-'a']--;
		l++;
		while(zq!=s1_ans && r<s2.size()){
			r++;
			if(r>=s2.size()) break;
			b[s2[r]-'a']++;
			if(b[s2[r]-'a']==a[s2[r]-'a']) zq++;
		}
		if(r>=s2.size()) break;
		mi=min(r-l+1,mi);
	}
	cout<<mi;
	return 0;
}



