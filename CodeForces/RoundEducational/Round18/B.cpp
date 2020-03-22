#include <bits/stdc++.h>
using namespace std;
const int MAXN=200005;
long long vet[MAXN];
int seq;
long long dp[MAXN][3];
int modulo(int x){
    return ((x%2LL)+2LL)%2;
}
long long sol(int k, long long mod){
    if(k==seq){
        if(mod== 1)
            return 0LL;
        return -100000000LL;
    }
    long long &resp = dp[k][mod]; 
    if(resp!=-1LL)
        return resp;
    resp = 0LL;
    resp = max(vet[k]+sol(k+1,modulo(mod+vet[k])),sol(k+1,mod));
    return resp;
}
int main(){
    memset(dp,-1LL,sizeof(dp));
    int i;
    cin>>seq;
    for(i=0;i<seq;i++){
        cin>>vet[i];
    }
    cout<<sol(0,0)<<endl;
    return 0;
}