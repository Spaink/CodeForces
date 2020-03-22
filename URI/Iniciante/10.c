#include <stdio.h>
int main(){
    int cod,numb_p,i;
    double valor_p, tot=0.0;
    for(i=1;i<=2;i++){
        scanf("%d %d %lf",&cod,&numb_p,&valor_p);
        tot+=numb_p*valor_p;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n",tot);
    return 0;
}