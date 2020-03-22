#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,p,q=1,t=0,i,vet[100000];
    cin>>n;
    cin>>k;
    for(i =2; n>1;i++){
        while(n%i==0){
             n = n/i;
             vet[t]=i;
             t++;
        }
    }
    if(t<k)
        cout<<"-1"<<endl;
    else if (t>=k){
        for(i=0;i<k-1;i++){
            cout<<vet[i]<<" ";
        }
        for(i=k-1;i<t;i++){
            q = q * vet[i];
        }
        cout<<q<<endl;
    }
    return 0;
}