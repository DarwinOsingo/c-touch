#include <stdio.h>
#include <math.h>

int main(void) {
    double monthly, annual_rate;
    int years;
    char choice;

    do {
        
        printf("\nEnter your monthly deposit amount (Ksh): ");
        scanf("%lf", &monthly);

        printf("Enter annual interest rate (in %%): ");
        scanf("%lf", &annual_rate);

        printf("Enter number of years: ");
        scanf("%d", &years);

        
        double r = annual_rate / 100.0;   
        double i = r / 12.0;              
        int N = years * 12;               

        double factor = pow(1.0 + i, N);
        double A = monthly * (factor - 1.0) / i;

        
        printf("\nAfter %d years, you will have: Ksh %.2f\n", years, A);
        printf("Your total contributions: Ksh %.2f\n", monthly * N);
        printf("Interest earned: Ksh %.2f\n", A - (monthly * N));

        
        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &choice);  

    } while (choice == 'y' || choice == 'Y');

    printf("\nGoodbye.\n");
    return 0;
}
