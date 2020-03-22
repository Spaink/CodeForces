#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,v,i,d=0,m,diff;
    cin>>n;
    v=n;
    while(v>=10){
        v = v/10;
        d++;
    }
    m = (v+1);
    for(i=1;i<=d;i++){
        m = m*10;
    }
    diff = m - n;
    cout<<diff<<endl;
    return 0;
}