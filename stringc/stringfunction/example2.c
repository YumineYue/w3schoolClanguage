#include <stdio.h>
#include <string.h>

int main(){

    char str1[20] = "Hello";
    char str2[] = "world !";

    strcat(str1,str2);

    printf("%s",str1);
}