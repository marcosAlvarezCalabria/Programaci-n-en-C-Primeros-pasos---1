#include <stdio.h>
int main (void)
{
    double gradCelsius;
    
    scanf("%lf\n",&gradCelsius);
    printf("%.1lf\n",gradCelsius * 9.0 / 5.0 + 32.0 );
    
    return 0;
}