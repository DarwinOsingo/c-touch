#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char choice;
    char vow[50];

    do
    {
        printf("whats your fav word broski:\n");
        fgets(vow,sizeof(vow),stdin);
        

        int count = 0;
        for(int i=0;vow[i]!='\0';i++){
        char c =tolower(vow[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
        }

        printf("your favorite word is %s\n",vow);
        printf("it has %d letters \n",count);
        printf("would you like to enter a diffrent word?(y/n)?\n");

        scanf(" %c",&choice);
        getchar();

        




    } while (choice=='y'||choice=='Y');

    printf("\ngoodbye\n");
    return 0;
    


}



