#include<bits/stdc++.h>
using namespace std;
struct zx{
	string name;
	int salary;
	int year;
};
zx a[105];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i].name>>a[i].salary>>a[i].year;
	}
	for(int i=1;i<=n;i++){
		cout<<a[i].name<<" "<<a[i].salary+a[i].year*500<<endl;
	}
	return 0;
}

