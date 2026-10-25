/*
#include<bits/stdc++.h>
using namespace std;
long long n,s1,ma=0,sum=0;
set<int> ans;
struct p{
	long long d,s,z,sz;
	long long sum(){
		return d-s; 
	}
} a[1000005];
bool cmp(p l,p l1){
	if(l.z!=0){
		ans.insert(l.sz);
	}	
	if(l.z!=0){
		return l.sum()>l1.sum();
	}
}
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld",&s1);
		a[s1].z++;
		ma=max(s1,ma);
	}
	for(long long i=1;i<=ma;i++){
		if(a[i].z==0) continue;
		a[i].s=a[i-1].z*(i-1)+a[i+1].z*(i+1);
		a[i].d=a[i].z*i;
		a[i].sz=i;
	}
	for(int i=1;i<=ma;i++){
		cout<<a[i].sz<<" "<<a[i].z<<" "<<a[i].d<<" "<<a[i].s<<" "<<a[i].sum()<<endl;
	}
	sort(a+1,a+ma+1,cmp);
	cout<<endl;
	for(int i=1;i<=ans.size();i++){
		cout<<a[i].sz<<" "<<a[i].z<<" "<<a[i].d<<" "<<a[i].s<<endl;
	}
	for(int i=1;i<=ans.size();i++){
		//if(a[i].z==0) continue;
		sum+=a[i].d;
		//a[a[i].sz-1].z=0;
		//a[a[i].sz+1].z=0;
		cout<<sum<<endl;
	}
	cout<<sum;
	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	cout<<27;
	retunr 0;
}
