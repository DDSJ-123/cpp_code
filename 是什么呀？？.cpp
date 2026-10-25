#include<bits/stdc++.h>
using namespace std;
int main(){
	char n,a;
	cin>>n;
	a=int(n);
	if(a<123 && a>=97) cout<<"loWEr";
	else if(a<91 && a>=65) cout<<"uPPer";
	else cout<<"diGit";
	return 0;
}
