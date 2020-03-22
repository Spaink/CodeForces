#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    int MaiorAB, MaiorBC;
    scanf("%d %d %d",&a,&b,&c);
    MaiorAB= (a+b+abs(a-b))/2;
    MaiorBC= (b+c+abs(b-c))/2;
    if(MaiorAB>MaiorBC)
        printf("%d eh o maior\n",MaiorAB);
    else
         printf("%d eh o maior\n",MaiorBC);
    return 0;
}