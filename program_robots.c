#include <stdio.h>
int main (void)
{
    int number_robots;
    int index = 1;
    int enginePower;
    int resistance;
    int weight;
    int height;
    int res ;
   printf("Introduce el numero de robots\n");
    scanf("%d", &number_robots);
   printf("el numero de robots es %d\n", number_robots); 
    
    while (index <= number_robots)
    {
        printf("Introduce el numero de enginepower robot numero%d",index);
        scanf("%d\n", &enginePower);
        printf("Introduce el numero de resistance robot %d",index);
        scanf("%d\n", &resistance);
        printf("Introduce el weight del robot %d", index);
        scanf("%d\n", &weight);
        printf("Introduce height del robot %d", index);
        scanf("%d\n", &height);
        res = (enginePower + resistance) * (weight - height);
        index++;
        
    }
    printf("el resultado es %d", res);
    
}