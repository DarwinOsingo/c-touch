#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
    char vow[50];
    printf("whats your favorite word?\n");
    fgets(vow, sizeof(vow),stdin);

    vow[strcmp(vow,"\n")]= '\0';

    int count = 0;
    for( int i=0;vow[i] != '\0';i++){
       if(isalpha((unsigned char)vow[i])){
        count ++;
        
       }

    }
    printf("your fav word is %s\n",vow);

    printf("it has %d letters\n",count);





}