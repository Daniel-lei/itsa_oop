#include<bits/stdc++.h>
using namespace std;
int main(void){
    int pay,t;
    double sum;
    while(cin>>t>>pay){
        if(t<=60){
            sum = pay*t;
        }
        else if(t<=120){
            sum = pay*60+pay*(t-60)*1.33;
        }
        else{
            sum = pay*60+pay*60*1.33+pay*(t-120)*1.66;
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
     return 0;
}
