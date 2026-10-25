#include<bits/stdc++.h>
using namespace std;
string s;
long long sum;
struct l{
	long long z;
	char z1;
}a[20000];
bool cmp(l l1,l l2){
	if(l1.z==l2.z) return l1.z1<l2.z1;
	return l1.z>l2.z;
}
int main(){
	freopen("count.in","r",stdin);
	freopen("count.out","w",stdout);
	getline(cin,s);
	for(long long i=0;i<s.size();i++){
		if(s[i]!=' '){
			a[int(s[i])].z++;
			a[int(s[i])].z1=s[i];
			if(a[int(s[i])].z==1) sum++;
		}
	}
	sort(a,a+140,cmp);
	for(long long i=0;i<sum;i++){
		cout<<a[i].z1;
	}
	return 0;
}

