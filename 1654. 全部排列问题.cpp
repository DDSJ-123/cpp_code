#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n==1){
			cout<<i<<"\n";
		}
		for(int i1=1;i1<=n;i1++){
			if(n==2){
				cout<<i<<i1<<"\n";
			}
			for(int i2=1;i2<=n;i2++){
				if(n==3){
					cout<<i<<i1<<i2<<"\n";
				}
				for(int i3=1;i3<=n;i3++){
					if(n==4){
						cout<<i<<i1<<i2<<i3<<"\n"; 
					}
					for(int i4=1;i4<=n;i4++){
						if(n==5){
							cout<<i<<i1<<i2<<i3<<i4<<"\n";
						}
						for(int i5=1;i5<=n;i5++){
							if(n==6){
								cout<<i<<i1<<i2<<i3<<i4<<i5<<"\n";
							}
						}
					}
				}
			}
		}
	}
	return 0;
}



