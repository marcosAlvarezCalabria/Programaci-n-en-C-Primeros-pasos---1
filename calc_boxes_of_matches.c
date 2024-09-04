#include <stdio.h>
int main (void) 
{
    int total_matches;
    int matches_per_box;
    int num_boxes;
    int leftover_matches;

    scanf("%d", &total_matches);
    scanf("%d", &matches_per_box);
    num_boxes = total_matches/matches_per_box;
    leftover_matches =  total_matches % matches_per_box;
    printf("%d\n", num_boxes);
    printf("%d",leftover_matches);

    return 0;

}