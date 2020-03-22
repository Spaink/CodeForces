#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k,nc=0,nd=0;
    cin>>n>>k;
    nd = n/(double)(2*(1+k));
    nc = nd*k;
    cout<<nd<<" "<<nc<<" "<<n-(nd+nc)<<endl;
    return 0;
}