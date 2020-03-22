#include <stdio.h>
int main(){
    int tempo, h=0,m=0,s=0;
    scanf("%d",&tempo);
    h = tempo/3600;
    tempo = tempo%3600;
    m = tempo/60;
    s = tempo%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}