#include <stdio.h>

    void myFunction(char name[],int age){
        
        printf("Hello %s Age %d\n",name,age);

}

int main(){

    myFunction("Liam",18);
    myFunction("Willy",19);
    myFunction("Ana",18);

    return 0;
}
