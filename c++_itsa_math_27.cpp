#include<iostream>

using namespace std;
int main(void){
    int a,b;
    while(cin>>a>>b){
        int sum =0 ;
        if(a>=b){
            for(int i=b;i<=a;i++){
                sum+=i;
            }
        }
        else{
            for(int i =a;i<=b;i++){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
     return 0;
}
