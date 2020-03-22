#include <bits/stdc++.h>
using namespace std;
const int MAXN=200005;
long long vet[MAXN];
int q,n,k,cont=0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,tot,impar=0,l=1;
    cin>>q;
    while(q--){
        impar=0;
        cin>>n>>k;
        for(j=0;j<n;j++){
            cin>>vet[j];
            if(vet[j]%2==1)
                impar++;
        }
        if(impar<k || (impar-k)%2==1){
            cout<<"No"<<"\n";
        }else{
            cout<<"Yes"<<"\n";
            impar=k-1;
            for(int r=0;r<n && impar>0;r++){
                if(impar==0)
                    break;
                if(vet[r]%2==1){
                    cout<<r+1<<" ";
                    impar--;
                }
            }
            cout<<n<<"\n";
        }
    }
    return 0;
}