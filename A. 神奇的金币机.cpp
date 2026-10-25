#include<bits/stdc++.h>
using namespace std;
int n,m;
int ma=0;
int main(){
    cin>>n>>m;
    for(int i=1;i<=2;i++){
        if(n>m){
            ma+=n;
            n--;
        }else{
            ma+=m;
            m--;
        }
    }
    cout<<ma<<endl;
    return 0;
}