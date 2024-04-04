#include <stdio.h>

int main(){

    int dice = 1;

    while(dice <= 6){
        if(dice < 6){
            printf("No yatzzy\n");
        }else{
            printf("Yatzy\n");
        }
        dice = dice + 1;
    }

}