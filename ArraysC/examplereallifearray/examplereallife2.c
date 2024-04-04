#include <stdio.h>

int main(){

    int ages[] = {20,22,18,35,48,26,87,70};

    int lenght = sizeof(ages)/sizeof(ages[0]);

    int lowestage = ages[0];

    for(int i = 0; i < lenght; i++){
        if(lowestage > ages[i]){
            lowestage = ages[i];
        }
    }

    printf("Lowest age = %d\n", lowestage);
}