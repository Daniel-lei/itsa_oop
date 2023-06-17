#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    int a;
    while(cin>>x>>y){
        a = abs(x)*abs(x)+abs(y)*abs(y);
        double temp = 1;
        while(abs(temp-a/temp)>1e-6){
            temp = (temp+a/temp)/2;
        }
        if(temp<=100){
            cout<<"inside\n";
        }
        else{
            cout<<"outside\n";
        }
    }
    return 0;
}
