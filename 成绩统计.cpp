#include<bits/stdc++.h>
using namespace std;
struct cj{
	string name;
	int nl;
	int yw,sx,yu;
	int zf=sx+yu+yw; 
};
cj a[5];
int main(){
    for(int i=1;i<=2;i++){
    	cin>>a[i].name>>a[i].nl>>a[i].yw>>a[i].sx>>a[i].yu;
	}
	if(a[1].zf==a[2].zf){
		cout<<a[1].name<<" "<<a[2].name;
	}else if(a[1].zf>a[2].zf){
		cout<<a[1].name; 
	}else{
		cout<<a[2].name;
	}
	return 0;
}

