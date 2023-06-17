#include<bits/stdc++.h>

using namespace std;
int main() {
    int a[6];
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    cout<<a[5];
    for(int i=4;i>=0;i--){
        cout<<" "<<a[i];
    }
    cout<<"\n";
    return 0;
}
