#include <stdio.h>

int main(){

    char greeting[] = "Hello world !";
    char greetings[] = "Hello world !";
    char carName[] = "volvo";
    char carName1[] = "volvo";
    char greeting1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    int lenght = sizeof(carName1)/sizeof(carName1[0]);
    int i;
    int j;



    for(j = 0; j < 5; ++j){
        printf("%c ",carName1[j]);
    }

    for (i = 0; i < 5; ++i) {
  printf("%c\n", carName[i]);
} 
    
    printf("%s\n",greeting);
    printf("%c\n",greetings[0]);
    printf("%s ", greetings);
}