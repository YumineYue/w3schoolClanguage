#include <stdio.h>

int main(){
    int item = 50;
    float cost_per_item = 2.5;
    float total_cost = item * cost_per_item;
    char currency = '$';

    printf("Number of item : %d\n", item);
    printf("Cost per item : %.1f\n", cost_per_item);
    printf("Total cost item : %.2f %c",total_cost,currency);
}