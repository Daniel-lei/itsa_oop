#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b;
    float answer;
    while(cin>>a>>b){
        answer =a*b/2;
        cout.flags(ios::fixed);
        cout.precision(1);
        cout<<answer<<endl;
    }
    return 0;
}
