#include <iostream>
using namespace std;
int main(){
    float v;
    cin>>v;
    if(v>=0 && v<=25.0000)
        cout<<"Intervalo [0,25]"<<endl;
    if(v>25.00001 && v<=50.000000)
        cout<<"Intervalo (25,50]"<<endl;
    if(v>50.000001 && v<=75.000000)
        cout<<"Intervalo (50,75]"<<endl;
    if(v>75.000001 && v<=100.00000)
        cout<<"Intervalo (75,100]"<<endl;
    if(v<0 || v>100.00000)
        cout<<"Fora de intervalo"<<endl;
}