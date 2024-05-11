/*
Free electricity calculations! 

Store last 12 month electricity usage of a consumer in an array. 
Input current month’s usage. 
Compute bill amount using the following logic 
     Bill is = 0, if current month's usage is less than average of last 12 months and current month's usage is < 200 units
     if current month's usage is more than 200, then excess units must be billed at Rs 7 per unit

After current month's usage calculation, save the current month as the last month's usage.  Drop the very first month's usage and move all usages one element to the left

When user enters END for usage, print the current values of the array
*/


#include <stdio.h>

#define MAX_MONTHS 12

// Function to calculate the average usage of the last 12 months
float calculateAverage(int usage[], int numMonths) {
    int sum = 0;
    for (int i = 0; i < numMonths; i++) {
        sum += usage[i];
    }
    return (float)sum / numMonths;
}

// Function to compute the bill amount
float computeBill(int currentUsage, float averageUsage) {
    if (currentUsage < averageUsage && currentUsage < 200) {
        return 0;
    } else if (currentUsage > 200) {
        return (currentUsage - 200) * 7;
    } else {
        return -1; // Invalid condition
    }
}

// Function to shift the usage array to the left
void shiftLeft(int usage[], int numMonths) {
    for (int i = 0; i < numMonths - 1; i++) {
        usage[i] = usage[i + 1];
    }
}

int main() {
    int usage[MAX_MONTHS];
    int currentUsage;
    int numMonths = 0;

    // Input last 12 months' usage
    printf("Enter last 12 months' electricity usage (separated by spaces):\n");
    for (int i = 0; i < MAX_MONTHS; i++) {
        scanf("%d", &usage[i]);
        numMonths++;
    }

    // Input current month's usage
    printf("Enter current month's electricity usage: ");
    scanf("%d", &currentUsage);

    // Calculate average usage of last 12 months
    float averageUsage = calculateAverage(usage, numMonths);

    // Compute bill amount
    float bill = computeBill(currentUsage, averageUsage);

    // Save current month's usage
    shiftLeft(usage, MAX_MONTHS);
    usage[MAX_MONTHS - 1] = currentUsage;

    // Print the updated usage array
    printf("Updated electricity usage array:\n");
    for (int i = 0; i < MAX_MONTHS; i++) {
        printf("%d ", usage[i]);
    }
    printf("\n");

    printf("Bill amount: Rs %.2f\n", bill);

    return 0;
}
