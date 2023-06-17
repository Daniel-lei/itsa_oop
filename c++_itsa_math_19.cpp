#include<bits/stdc++.h>
using namespace std;
int main(void){
        int t;
        double money;
        while(cin>>t){
            if(t<=800){
                money = t*0.9;
            }
            else if(t<1500){
                money = t*0.9*0.9;
            }
            else{
                money = t*0.9*0.79;
            }
            cout<<fixed<<setprecision(1)<<money<<endl;
        }
     return 0;
}
