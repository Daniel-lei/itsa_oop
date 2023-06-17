#include<bits/stdc++.h>

using namespace std;
int main() {
    int a[6];
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    int sum =0;
    for(int i =0;i<6;i++){
        sum+=a[i]*a[i]*a[i];
    }
    cout<<sum<<endl;
    return 0;
}
