#include<bits/stdc++.h>

using namespace std;

int main(){
    double a,b;
    while(cin>>a){
        b = a*a*10+0.5;
        b = floor(b)/10;
        cout<<fixed<<setprecision(1)<<b<<endl;
    }
    return 0;
}
