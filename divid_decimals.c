#include <stdio.h>
int main (void)
{
    double money;
    double price_book;
    scanf("%lf", &money);
    scanf("%lf", &price_book);
    
    int count_books= (int)(money/price_book);
    printf("%d", count_books);
    return 0;
}