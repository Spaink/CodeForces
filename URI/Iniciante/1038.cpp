#include <bits/stdc++.h>
using namespace std;
int main(){
    int cod,qtd;
    double p=0.0;
    cin>>cod>>qtd;
    if(cod==1)
        p = qtd*4.00;
    if(cod==2)
        p = qtd*4.50;
    if(cod==3)
        p = qtd*5.00;
    if(cod==4)
        p = qtd*2.00;
    if(cod==5)
        p = qtd*1.50;
    cout<<fixed<<setprecision(2);
    cout<<"Total: R$ "<<p<<endl;
    return 0;
}