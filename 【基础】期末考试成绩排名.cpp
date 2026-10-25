#include<bits/stdc++.h>
using namespace std;
struct xs{
	int sh;
	string name;
	int cj;
}; 
bool cmp(xs x,xs y){
	if(x.cj!=y.cj) return x.cj>y.cj;
	else return x.sh<y.sh;
}
xs a[105];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i].sh>>a[i].name>>a[i].cj;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].sh<<" "<<a[i].name<<" "<<a[i].cj<<endl;
	}
	return 0;
}

