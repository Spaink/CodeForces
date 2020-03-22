#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,delta,x1,x2;
    double p,q,k;
    cin>>a>>b>>c;
    delta = b*b-4*a*c;
    if(delta<0)
        cout<<"Impossivel calcular"<<endl;
    else if(delta==0){
        x1 = -b/2*a;
        x2 = x1;
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<x1<<endl;
        cout<<"R2 = "<<x2<<endl;
    }
    else{
        p = -b+sqrt(delta);
        q = -b-sqrt(delta);
        k = 2*a;
        if(k==0){
            if(p!=0 || q!=0)
                cout<<"Impossivel calcular"<<endl;
        }
        if(p!=0 && q!=0 && k!=0){
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout<<fixed<<setprecision(5);
            cout<<"R1 = "<<x1<<endl;
            cout<<"R2 = "<<x2<<endl;
        }
    }
    return 0;
}