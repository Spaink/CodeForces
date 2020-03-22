#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a[55][55],b[55][55],p=0,pos[2][2505],r=0,t=0,cond=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                cond=1;
            }else{
                cond=0;
                break;
            }
        }
        if(cond==0)
            break;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(a[i][j]==1 && a[i+1][j]!=0 && a[i][j+1]!=0 && a[i+1][j+1]!=0){
                p++;
                b[i][j]=1;
                b[i][j+1]=1;
                b[i+1][j]=1;
                b[i+1][j+1]=1;
                pos[r][t]=i+1;
                pos[r][t+1]=j+1;
                r++;
            }
        }
    }
    if(p==0 && cond==1){
        cout<<p<<endl;
    }
    else if(p==0 && cond==0)
        cout<<-1<<endl;
    else
        cout<<p<<endl;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<2;j++){
            cout<<pos[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}