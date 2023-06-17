#include<bits/stdc++.h>
using namespace std;
int main(void){
    int num;
    while(cin>>num){
        unsigned long long int sum = 1;
        for(int i=1;i<=num;i++){
            sum*=i;
        }
        cout<<sum<<endl;
    }
     return 0;
}
