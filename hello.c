#include <stdio.h>


int main(void){
    char name[50];
    printf("whats your name?\n");
    fgets(name, sizeof(name),stdin);

    

    printf("hello,%s", name);
    return 0;
}