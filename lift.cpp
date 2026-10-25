#include<bits/stdc++.h>
using namespace std;

const int N = 1000005;

int n,k;
int ma;
bool bj[N];
struct node{
	int zl;
	int id;
	int cs;
}a[N],b[N],c[N],d[N];

bool cmp(node ax,node ay){
	return ax.id<ay.id;
}

void cl(){
	for(int i=1;i<=n;i++){
		d[i].cs=b[i].cs;
		d[i].id=b[i].id;
		d[i].zl=b[i].zl;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(b[i].zl<b[j].zl){
				ans-=k;
			}
			if(b[i].zl>b[j].zl){
				ans+=k;
			}
		}
		ans+=b[i].zl;
	}
	string sl1="",sl2="";
	sort(d+1,d+n+1,cmp);
	for(int i=1;i<=n;i++){
		sl2+=char(d[i].cs+'0');
	}
	for(int i=1;i<=n;i++){
		d[i].cs=c[i].cs;
		d[i].id=c[i].id;
		d[i].zl=c[i].zl;
	}
	sort(d+1,d+n+1,cmp);
	for(int i=1;i<=n;i++){
		sl1+=char(d[i].cs+'0');
	}
	cout<<sl1<<" "<<sl2<<"\n";
	if(ans>ma || (ans==ma && sl2<sl1)){
		for(int i=1;i<=n;i++){
			c[i].zl=b[i].zl;
			c[i].id=b[i].id;
			c[i].cs=b[i].cs;
			ma=ans;	
		}
	}
	return ;
}

void js(int c){
	if(c==n+1){
		cl();
		return;
	}
	for(int i=1;i<=n;i++){
		if(!bj[i]){
			bj[i]=true;
			b[c].zl=a[i].zl;
			b[c].id=a[i].id;
			b[c].cs=c;
			js(c+1);
			bj[i]=false;
		}
	}
}

int main(){
	
	freopen("lift.in","r",stdin);
	freopen("lift.out","w",stdout);
	
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i].zl;
		a[i].id=i;
	}
	js(1);
	sort(c+1,c+n+1,cmp);
	cout<<ma<<"\n";
	for(int i=1;i<=n;i++){
		cout<<c[i].cs<<" ";
	}
	return 0;
}



