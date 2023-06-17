#include<bits/stdc++.h>

using namespace std;
int main(){
    float a,b,h;
    float answer;
    while(cin>>a>>b>>h){
        answer =(a+b)*h/2;
        cout<<"Trapezoid area:";
        cout.flags(ios::fixed);
        cout.precision(1);
        cout<<answer<<endl;
    }
    return 0;
}
