#include<bits/stdc++.h>

using namespace std;
int main(){
    int dst;
    int speed;
    speed = 10000-30*254;
    int t;
    while(cin>>dst){
        t=0;
        t = 10000*dst/speed;
        if(dst%speed>0){
            t++;
        }
        cout<<t<<endl;
    }
    return 0;
}
