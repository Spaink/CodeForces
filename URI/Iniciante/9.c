#include <stdio.h>
#include <string.h>
int main(){
    char nome[500];
    double salario, vendas, salario_tot;
    getchar();
    scanf("%[^\n]",nome);
    scanf("%lf %lf",&salario,&vendas);
    salario_tot = salario + 0.15*vendas;
    printf("TOTAL = R$ %.2lf\n",salario_tot);
    getchar();
    return 0;
}