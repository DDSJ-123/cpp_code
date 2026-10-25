#include<bits/stdc++.h>
using namespace std;
bool bj=false;
struct pp{
	int yw,ss,yy;
	int sum(){
		return yw+ss+yy;
	}
	int bh,pm;
}a[10005];
int n,n1;
bool cmp(pp l,pp ll){
	if(bj==false){
		if(l.sum()!=ll.sum()) return l.sum()>ll.sum();
		else if(l.yw+l.ss!=ll.yw+ll.ss) return l.yw+l.ss>ll.yw+ll.ss;
		else if(max(l.yw,l.ss)!=max(ll.yw,ll.ss)) return max(l.yw,l.ss)>max(ll.yw,ll.ss);
		else{
			return l.bh<ll.bh;
		}
	}else{
		return l.bh<ll.bh;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].yw>>a[i].ss>>a[i].yy;
		a[i].bh=i;
	}
	sort(a+1,a+n+1,cmp);
	n1=n;
	for(int i=1;i<=n;i++){
		n1--;
		if(a[i].sum()==a[i-1].sum() && max(a[i].yw,a[i].ss)==max(a[i-1].yw,a[i-1].ss) && a[i].yw+a[i].ss==a[i-1].yw+a[i-1].ss) a[i].pm=a[i-1].pm;
		else a[i].pm=n-n1;		
	}
	/*
	for(int i=1;i<=n;i++){
		cout<<a[i].bh<<" "<<a[i].yw<<" "<<a[i].ss<<" "<<a[i].yy<<" "<<a[i].pm<<"\n"; 
	}
	*/
	bj=true;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].pm<<"\n";
	}
	return 0;
}


