#include<bits/stdc++.h>

using namespace std;
int is_prime(int num){
    int i;
    if(num==1){
        return 0;
    }
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(void){
    int num;
    while(cin>>num){
        if(is_prime(num)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

        }
return 0;
}
