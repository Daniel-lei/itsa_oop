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
        int maximum = 0;
        for(int j=1;j<num;j++){
            if(is_prime(j)){
                if(j>maximum){
                    maximum = j;
                }
            }
        }
        printf("%d\n",maximum);
        }
return 0;
}
