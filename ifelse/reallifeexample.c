#include <stdio.h>

int main(){

    int doorcode = 1327;
    int mynum = 10;

    if(doorcode == 1327){
        printf("Correct code! you can enter\n");
    }else{
        printf("Wrong code just try it again\n");
    }

    if(mynum > 0){
        printf("the value is positive number\n");
    }else if(mynum > 0){
        printf("The value is negative\n");
    }else{
        printf("The value is 0\n");
    }


}