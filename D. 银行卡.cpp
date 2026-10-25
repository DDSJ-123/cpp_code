#include<bits/stdc++.h>
using namespace std;

string sr;
bool bj=false;

bool jy(string z){
    int ans=0;
    for(int i=0;i<z.size();i++){
        if(z[i]>='0'&& z[i]<='9'){
            ans=ans+int(z[i]-'0')*pow(2,17-i);
        }else{
            ans=ans+10*pow(2,17-i);
        }
    }
    return ans%11==1;
}

bool rq(string z){
    int nian=stoi(z.substr(6,4));
    int yue=stoi(z.substr(10,2));
    int ri=stoi(z.substr(12,2));
    if(nian>=1900 && nian<=2025){
        bool r=false;
        if((nian%4==0 && nian%100!=0) || nian%400==0){
            r=true;
        }
        if(nian==2025 && yue>=5){
            if(ri>=1 && ri<=10){
                return true;
            }else{
                return false;
            }
        }
        if(yue>=1 && yue<=12){
            if(yue==2 && ri>=1 && ri<=28+r){
                return true;
            }else if((yue==1 || yue==3 || yue==5 || yue==7 || yue==8 || yue==10 || yue==12) && ri>=1 && ri<=31){
                return true;
            }else if(ri>=1 && ri<=30 && yue!=2){
                return true;
            } 
        }
    }
    return false;
}

int n;

int main(){
    cin>>n;
    while(n--){
        cin>>sr;
        if(sr.size()==18 && jy(sr) && rq(sr)){
            cout<<"PASS\n";
        }else{
            cout<<"FAIL\n";
        }
    }
    return 0;
}