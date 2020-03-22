#include <stdio.h>
int main(){
    int numb, numb_h;
    double valor_h,salario;
    scanf("%d %d %lf",&numb,&numb_h,&valor_h);
    salario = numb_h*valor_h;
    printf("NUMBER = %d\n",numb);
    printf("SALARY = U$ %.2lf\n",salario);
    return 0;
}