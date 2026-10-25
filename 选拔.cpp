#include<bits/stdc++.h>
using namespace std;
int sum; 
struct xs{
	int sh;
	int js,js1,js2,js3;
	int sum(){
		return js+js1+js2+js3;
	}
};
xs a[205];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i].sh>>a[i].js>>a[i].js1>>a[i].js2>>a[i].js3;
	}
	for(int i=1;i<=n;i++){
		if(a[i].sum()>=200){
			cout<<a[i].sh<<" "<<a[i].js<<" "<<a[i].js1<<" "<<a[i].js2<<" "<<a[i].js3<<endl;
			sum++;
		}
	}
	cout<<sum;
	return 0;
}

