#include<bits/stdc++.h>
using namespace std;
struct zt{
	string name;
	int ps;
};
bool cmp(zt x,zt y){
	if(x.ps!=y.ps) return x.ps>y.ps;
	else return x.name>y.name;
}
zt a[1005];
int n,sum=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	string s;
    	int s1=1;
    	cin>>s;
    	for(int j=1;j<=n;j++){
    	    if(a[j].name==s){
    	    	s1=0;
    	    	a[j].ps++;
			}
		}
		if(s1==1){
			sum++;
			a[i].name=s;
			a[i].ps=1;
		}
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=sum;i++){
		cout<<a[i].name<<" "<<a[i].ps<<endl;
	} 
	return 0;
}

