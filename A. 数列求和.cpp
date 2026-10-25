#include<bits/stdc++.h>
using namespace std;
int n,sum;
int a[1005];
int main(){
    cin>>n;
    a[0]=1;
    for(int i=1;i<=n;i++){
        a[i]=a[i-1]+(i-1);
        sum+=a[i];
        //cout<<a[i]<<"\n";
    }
    cout<<sum;
    return 0;
}