#include<bits/stdc++.h>
using namespace std;

string intToA(int num,int radix)
{
    string ans="";
    do{
        int t=num%radix;
        if(t>=0&&t<=9){
            ans+=t+'0';
        }
        else{
            ans+=t-10+'A';
        }
        num/=radix;
    }while(num!=0);
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(void){
    int num;
    string ans="";
    while(cin>>num){
        ans = intToA(num,16);
        cout<<ans<<endl;
    }
    return 0;
}
