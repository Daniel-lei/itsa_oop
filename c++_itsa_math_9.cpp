#include<bits/stdc++.h>

using namespace std;

int main(){
    int i;
    int a =1;
    while(cin>>i){
        a=1;
        if(i>31){
        cout<<"Value of more than 31"<<endl;
        }
        else{
            while(i!=0){
                a = a*2;
                i--;
            }
            cout<<a<<endl;
        }
    }

    return 0;
}
