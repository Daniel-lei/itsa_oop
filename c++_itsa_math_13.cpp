#include<bits/stdc++.h>
using namespace std;
int main(){
    int start_hour,start_min,end_hour,end_min;
    int start,end;
    cin>>start_hour>>start_min;
    cin>>end_hour>>end_min;
    start = start_hour*60+start_min;
    end = end_hour*60+end_min;
    int t = end - start;
    t = t/30;
    if (t<=4){
        t= t*30;
        cout<<t<<endl;
    }
    else if(t>=4 && t<=8){
        t = 4*30+(t-4)*40;
        cout<<t<<endl;
    }
    else{
        t = 4*30+4*40+(t-8)*60;
        cout<<t<<endl;
    }
    return 0;
}
