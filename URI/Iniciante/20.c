#include <stdio.h>
int main(){
    int idade, a=0, m=0, d=0;
    scanf("%d",&idade);
    a = idade/365;
    idade = idade%365;
    m = idade/30;
    d = idade%30;
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}