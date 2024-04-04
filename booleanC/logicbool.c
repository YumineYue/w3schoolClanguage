#include <stdio.h>
#include <stdbool.h>

int main(){
    bool a = true;
    bool b = false;

    bool isHamburgeristasty = true;
    bool ispizzatasty = true;

    printf("%d\n",isHamburgeristasty == ispizzatasty);

    int x = 10;
    int y = 9;


    printf("%d\n", 10 == 10);
    printf("%d\n", 10 == 15);
    printf("%d\n", 5 == 55);

    printf("True : %d\n", a);
    printf("False : %d\n", b);
    printf("%d\n", 10 > 9);
    printf("%d\n", x > y);


    return 0;
}
