#include <stdio.h>
int main (void)
{
    int num_exams;
    int index = 0;
    int suma = 0;
    int note;
    double res ;
    scanf("%d", &num_exams);

    while (index < num_exams)
    {
        scanf("%d",&note);
        suma = note +  suma ;
        index++;

    }
    
    res =  (double) suma / (double) num_exams;
    
    printf ("%.2lf",res);


    return 0;
}