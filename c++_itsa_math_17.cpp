#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    while(a!=0 && b!=0){
        if(a >= b){
            a = a%b;
        }
        else if(b > a){
            b = b%a;
        }
    }
    if(a >= b){
        cout<<a<<"\n";
    }
    else{
        cout<<b<<"\n";
    }

    return 0;
}
