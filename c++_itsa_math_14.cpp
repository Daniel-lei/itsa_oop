#include<bits/stdc++.h>
using namespace std;
int main(){
    int total;
    int day,hour,mins,sec;
    cin>>total;
    day= total/86400;
    total = total%86400;
    hour = total/3600;
    total = total%3600;
    mins = total/60;
    total = total%60;
    sec = total;
    cout<<day<<" days"<<endl;
    cout<<hour<<" hours"<<endl;
    cout<<mins<<" minutes"<<endl;
    cout<<sec<<" seconds"<<endl;
    return 0;
}
