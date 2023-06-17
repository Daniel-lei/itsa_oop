#include<bits/stdc++.h>

using namespace std;
int main(void){
    int num;
    while(cin>>num){
        int sum =0 ;
        for(int i =1;i<=num;i++){
            if(i%3==0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
     return 0;
}
