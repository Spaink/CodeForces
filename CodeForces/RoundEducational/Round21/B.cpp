#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,p;
    long long d[200100],pf[200100],sum=0LL;
    double media;
    cin>>n>>k;
    p = n-k+1;
    for(i=1;i<=n;i++){
        cin>>d[i];
        if(i<=k)
            pf[i]++;
        if(i>p)
            pf[i]--;
    }
    for(i=1;i<=n;i++){
        pf[i]+=pf[i-1];
    }
    for(i=1;i<=n;i++){
        sum+=d[i]*pf[i];
    }
    media = (double)sum/(double)p;
    cout << fixed << setprecision(9);
    cout<<media<<endl;
    return 0;
}