#include <stdio.h>

int main(){

    int myage = 25;
    int votingage = 18;

    if(myage >= votingage){
        printf("old to enough to vote\n");
    }else{
        printf("not old enough to vote\n");
    }

    printf("%d\n",myage >= votingage);

}