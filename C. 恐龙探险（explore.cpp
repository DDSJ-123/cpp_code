#include<bits/stdc++.h>
using namespace std;
int n;
struct jb1{
	int a,b;
} s[10005];
int jb=1,jf=0;
bool cmp(jb1 z,jb1 z1){
	if(z.b<z1.b || z.b>0) return z.b>z1.b;
	return z.a>z1.a;
} 
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>s[i].a>>s[i].b;
	}
	sort(s+1,s+n+1,cmp);
	/*
	for(int i=1;i<=n;i++){
		cout<<s[i].a<<" "<<s[i].b<<endl;
	}*/
	for(int i=1;i<=n;i++){
		if(jb==0){
			break;
		}
		jb=jb-1+s[i].b;
		jf+=s[i].a;
		//cout<<jb<<endl;
	}
	cout<<jf;
	return 0;
}
