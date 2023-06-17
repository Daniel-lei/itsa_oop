#include<bits/stdc++.h>

using namespace std;
int main(){
    int a;
    int ten=0,five=0,one=0;
    cin>>a;
    while(a>=10){
        ten++;
        a-=10;
    }
    while(a>=5){
        five++;
        a-=5;
    }
    while(a>0){
        one++;
        a--;
    }
    cout<<"NT10="<<ten<<endl;
    cout<<"NT5="<<five<<endl;
    cout<<"NT1="<<one<<endl;
    return 0;
}
