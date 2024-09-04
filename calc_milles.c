#include <stdio.h>
int main (void)
{
    double kilometers;
    double milles;
    kilometers = 0;
    milles = 0.621371;
    
    scanf("%lf", &kilometers);
    printf("%.6lf", kilometers * milles);
    
    return 0;
}