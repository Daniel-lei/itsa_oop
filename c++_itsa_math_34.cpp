#include<bits/stdc++.h>

using namespace std;

int main() {
    int a;
    while(cin>>a){
        cout<<"1";
        for(int i=2;i<=a;i++){
            if(a%i==0){
                cout<<" "<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}
