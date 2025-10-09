#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char vow[50];
    printf("how many vowels in this?\n");
    fgets(vow, sizeof(vow),stdin);

    vow[strcspn(vow,"\n")]= '\0';

    int count = 0;

    

   

    printf("your fav word is %s\n",vow);
    printf("it has %d vowels\n ", count);
    return 0;





}