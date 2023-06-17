#include<bits/stdc++.h>

using namespace std;
int main(){
    double a;
    double b;
    while(cin>>a){
        b= a*9;
        b= b/5+32;
        cout<<fixed<<setprecision(1)<<b<<endl;
    }
    return 0;
}
