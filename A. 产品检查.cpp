#include<bits/stdc++.h>
using namespace std;

string sr;
string s1,s2;

bool pd(string z){
    if((z[0]=='0' && z[1]>'0') || (z[0]=='1' && z[1]<='2')){
        return true;
    }
    return false;
}

int main(){
    cin>>sr;
    s1=sr.substr(0,2);
    s2=sr.substr(2,2);
    if(pd(s1) && pd(s2)){
        cout<<"AMBIGUOUS";
    }else if(pd(s1)){
        cout<<"MMYY";
    }else if(pd(s2)){
        cout<<"YYMM";
    }else{
        cout<<"NA";
    } 
    return 0;
}