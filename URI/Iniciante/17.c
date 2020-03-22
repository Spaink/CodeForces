#include <stdio.h>
int main(){
    int tempo,velocidade;
    double consumo;
    scanf("%d %d",&tempo,&velocidade);
    consumo = ((double)tempo*(double)velocidade)/12;
    printf("%.3lf\n",consumo);
    return 0;
}