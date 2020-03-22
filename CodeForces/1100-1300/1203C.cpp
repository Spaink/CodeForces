#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int  n,vet[400500],cond=0,cont=0,maior=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vet[i];
    }
    for(int i=0;i<n;i++){
        if(vet[i]>maior)
            maior=vet[i];
    }    
    for(int i=1;i<=10*n;i++){
        for(int j=0;j<n;j++){
            if(vet[j]%i==0)
                cond=1;
            else
                cond=0;
            if(cond==0)
                break;
        }
        if(cond==1)
            cont++;
        else
            break;
    }
    cout<<cont<<endl;
    return 0;
}