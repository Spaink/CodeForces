#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,b,p,f,h,c,qtd,vmax;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>b>>p>>f;
        cin>>h>>c;
        qtd=b/2;
        if(qtd>=1){
                if(qtd>=p+f){
                    vmax = p*h+f*c;
                }else{
                    if(qtd<p+f){
                        if(h>c){
                            if(p>=qtd){
                                vmax=qtd*h;
                            }else{
                                qtd-=p;
                                if(f>=qtd){
                                    vmax=p*h+qtd*c;
                                }else{
                                    vmax=p*h+f*c;
                                }
                            }
                        }else{
                            if(f>=qtd){
                                vmax=qtd*c;
                            }else{
                                qtd-=f;
                                if(p>=qtd){
                                    vmax=qtd*h+f*c;
                                }else{
                                    vmax=p*h+f*c;
                                }
                            }
                        }
                    }
                }
                if(h==c){
                    if(qtd>=p+f){
                        vmax=p*h+f*c;
                    }else{
                        if(p>=f){
                            qtd-=p;
                            vmax=p*h+qtd*c;
                        }else{
                            qtd-=f;
                            vmax=qtd*h+f*c;
                        }
                    }
                }
            }else{
                vmax=0;
            }
            cout<<vmax<<endl;
    }
    return 0;
}