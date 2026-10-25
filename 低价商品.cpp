#include<bits/stdc++.h>
using namespace std;
struct sp{
	string name;
	int jg;
};
bool cmp(sp x,sp y){
	return x.jg<y.jg;
}
sp a[5];
int main(){
    for(int i=1;i<=3;i++){
    	cin>>a[i].name>>a[i].jg;
	}
	sort(a+1,a+4,cmp);
	cout<<a[1].name<<" "<<a[1].jg;
	return 0;
}

