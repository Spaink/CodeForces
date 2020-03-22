#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int q, a,b,c,result;
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>a>>b>>c;
        result = (a+b+c)/2;
        cout<<result<<endl;
    }
    return 0;
}