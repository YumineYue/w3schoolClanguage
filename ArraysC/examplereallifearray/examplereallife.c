#include <stdio.h>

int main(){
    
    int ages[] = {20,22,18,35,48,26,87,70};

    float avg,sum = 0;
    int i;

    int lenght = sizeof(ages)/sizeof(ages[0]);

    for(i = 0; i < lenght; i++){
        sum += ages[i];
    }
    avg = sum/lenght;

    printf("The average age is: %.2f", avg);
}