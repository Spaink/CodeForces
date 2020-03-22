#include <stdio.h>
int main(){
    int nota,c100=0,c50=0,c20=0,c10=0,c5=0,c2=0,c1=0;
    scanf("%d",&nota);
    c100 = nota/100;
    nota = nota%100;
    c50 = nota/50;
    nota = nota%50;
    c20 = nota/20;
    nota = nota%20;
    c10 = nota/10;
    nota = nota%10;
    c5 = nota/5;
    nota = nota%5;
    c2 = nota/2;
    c1 = nota%2;
    printf("%d nota(s) de R$ 100,00\n",c100);
    printf("%d nota(s) de R$ 50,00\n",c50);
    printf("%d nota(s) de R$ 20,00\n",c20);
    printf("%d nota(s) de R$ 10,00\n",c10);
    printf("%d nota(s) de R$ 5,00\n",c5);
    printf("%d nota(s) de R$ 2,00\n",c2);
    printf("%d nota(s) de R$ 1,00\n",c1);
    return 0;
}