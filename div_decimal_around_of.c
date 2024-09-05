#include <stdio.h>
int main (void)
{
    double kg_cemen;
    int precio_cada_saco = 45;
    int num_sacos ;
    int res = 0;

    scanf("%lf", &kg_cemen);
    num_sacos =(kg_cemen / 120)+1;
    res = num_sacos * precio_cada_saco;

   // printf("precio de sacos %d\n" , precio_cada_saco);
   // printf("num sacos %d\n" , num_sacos);
   // printf("kg de cemento %lf\n" , kg_cemen);
    printf("%d" , res);



return 0;

}