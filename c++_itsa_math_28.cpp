#include<bits/stdc++.h>

using namespace std;
int main(void){
    int a;
    while(cin>>a){
        int i=0;
        while(i<=a){
            i++;
            if(i%5==0&&i%7==0){
                cout<<i;
                break;
            }
        }
        i++;
        for(;i<=a;i++){
            if(i%5==0&&i%7==0){
                cout<<" "<<i;
            }
        }
        cout<<endl;
    }
     return 0;
}
