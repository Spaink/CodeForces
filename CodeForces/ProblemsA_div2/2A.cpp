#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    char ini,end;
    int k,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        k = s.size();
        if(k>10){
            ini = s[0];
            end = s[k-1];
            cout<<ini<<k-2<<end<<endl;
        }else{
            cout<<s<<endl;
        }
    }

    return 0;
}