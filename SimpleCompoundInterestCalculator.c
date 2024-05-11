/*
Create a Simple (Savings Bank) and Compound interest (PPF) calculator.  

Inputs from user are Principal, term, interest rate, type of interest (S/C) and if (C) Compound is chosen, then ask  compounding frequency and calculate the interest and final amount.  Repeat until user enters 0 as principal amount  (read and learn about power of compounding)
*/

#include <stdio.h>
#include <math.h>

float calculateSimpleInterest(float principal, float rate, int term) {
    return (principal * rate * term) / 100;
}

float calculateCompoundInterest(float principal, float rate, int term, int frequency) {
    return principal * pow((1 + rate / (frequency * 100)), frequency * term) - principal;
}

int main() {
    float principal, rate, simpleInterest, compoundInterest, finalAmount;
    int term, frequency;
    char interestType;

    while (1) {
        printf("Enter principal amount (0 to exit): ");
        scanf("%f", &principal);
        if (principal == 0) {
            break;
        }

        printf("Enter term (in years): ");
        scanf("%d", &term);

        printf("Enter interest rate (in percentage): ");
        scanf("%f", &rate);

        printf("Enter type of interest (S for Simple, C for Compound): ");
        scanf(" %c", &interestType);

        if (interestType == 'S' || interestType == 's') {
            simpleInterest = calculateSimpleInterest(principal, rate, term);
            finalAmount = principal + simpleInterest;
            printf("Simple Interest: %.2f\n", simpleInterest);
            printf("Final Amount: %.2f\n", finalAmount);
        } else if (interestType == 'C' || interestType == 'c') {
            printf("Enter compounding frequency (per year): ");
            scanf("%d", &frequency);
            compoundInterest = calculateCompoundInterest(principal, rate, term, frequency);
            finalAmount = principal + compoundInterest;
            printf("Compound Interest: %.2f\n", compoundInterest);
            printf("Final Amount: %.2f\n", finalAmount);
        } else {
            printf("Invalid interest type. Please enter 'S' for Simple or 'C' for Compound.\n");
        }
    }

    return 0;
}
