#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,k,y;
    cin>>w;
    k=w-2;
    if(k==w/2)
        y=k;
    else
        y=w-2;
    if(k%2==0 && y%2==0 && y>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;  
    return 0;
}