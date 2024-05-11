/*
Understand the following two models of depreciation
1.Straight line depreciation method (Reference: https://www.investopedia.com/terms/s/straightlinebasis.asp)
2.Double declining balance method of depreciation (Reference: https://www.investopedia.com/terms/d/double-declining-balance-depreciation-method.asp)

Write requirements, test cases, pseudocode and actual code for the following functions

1.main() asking user for method of depreciation (S,D, X for exit), asset value, number of years.  Let the program be flexible to allow the users to use asset value and number of years from previous iteration
2.Function to calculate depreciation amount of an asset using straight line depreciation method for a given amount and number of years
3.Function to calculate depreciation amount of an asset using double declining balance method for a given amount and number of years
4.Function to write output in the format
“End of year 01,Depreciation: #####.## Current Value: ######.##  ”   
“End of year 02, Depreciation: #####.## Current Value: ######.##  ”
*/

#include <stdio.h>

float straightLineDepreciation(float assetValue, int numYears) {
    float depreciationPerYear = assetValue / numYears;
    float currentValue = assetValue;

    for (int year = 1; year <= numYears; year++) {
        float depreciationAmount = depreciationPerYear;
        currentValue -= depreciationAmount;
        printf("End of year %02d, Depreciation: %.2f, Current Value: %.2f\n", year, depreciationAmount, currentValue);
    }
}

float doubleDecliningBalanceDepreciation(float assetValue, int numYears) {
    float currentValue = assetValue;

    for (int year = 1; year <= numYears; year++) {
        float depreciationRate = 2.0 / numYears;
        float depreciationAmount = currentValue * depreciationRate;
        currentValue -= depreciationAmount;
        printf("End of year %02d, Depreciation: %.2f, Current Value: %.2f\n", year, depreciationAmount, currentValue);
    }
}

int main() {
    float assetValue = 0;
    int numYears = 0;

    while (1) {
        char method;
        printf("Choose method of depreciation (S for straight line, D for double declining balance, X for exit): ");
        scanf(" %c", &method);

        if (method == 'X' || method == 'x') {
            break;
        } else if (method == 'S' || method == 's' || method == 'D' || method == 'd') {
            if (assetValue == 0 || numYears == 0) {
                printf("Enter asset value: ");
                scanf("%f", &assetValue);
                printf("Enter number of years: ");
                scanf("%d", &numYears);
            } else {
                char reuse;
                printf("Do you want to use previous asset value and number of years? (Y/N): ");
                scanf(" %c", &reuse);
                if (reuse == 'N' || reuse == 'n') {
                    printf("Enter asset value: ");
                    scanf("%f", &assetValue);
                    printf("Enter number of years: ");
                    scanf("%d", &numYears);
                }
            }

            if (method == 'S' || method == 's') {
                straightLineDepreciation(assetValue, numYears);
            } else {
                doubleDecliningBalanceDepreciation(assetValue, numYears);
            }
        } else {
            printf("Invalid method. Please enter 'S' for straight line, 'D' for double declining balance, or 'X' for exit.\n");
        }
    }

    return 0;
}
