/*
Write the following functions
1. Function that takes an array and number of elements in the array as arguments and asks user to input the product name
2. Function that sorts the arrays based on user selected option Ascending or Descending order of the product name
3. Function that prints the sorted array
4. main() that will call function 1, function 2 and function 3 in appropriate sequence allowing program execution until user enters STOP for product name
*/


#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_PRODUCTS 100

void inputProductNames(char products[][MAX_NAME_LENGTH], int *numProducts) {
    *numProducts = 0;
    while (1) {
        printf("Enter product name for product %d (enter 'STOP' to finish): ", *numProducts + 1);
        fgets(products[*numProducts], MAX_NAME_LENGTH, stdin);
        products[*numProducts][strcspn(products[*numProducts], "\n")] = '\0';
        if (strcmp(products[*numProducts], "STOP") == 0) break;
        (*numProducts)++;
    }
}

void swap(char a[], char b[]) {
    char temp[MAX_NAME_LENGTH];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sortProductNames(char products[][MAX_NAME_LENGTH], int numProducts, int ascending) {
    for (int i = 0; i < numProducts - 1; i++) {
        for (int j = i + 1; j < numProducts; j++) {
            int comparisonResult = strcmp(products[i], products[j]);
            if ((comparisonResult > 0 && ascending) || (comparisonResult < 0 && !ascending)) {
                swap(products[i], products[j]);
            }
        }
    }
}

void printSortedArray(char products[][MAX_NAME_LENGTH], int numProducts) {
    printf("\nSorted product names:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("%d. %s\n", i + 1, products[i]);
    }
}

int main() {
    char products[MAX_PRODUCTS][MAX_NAME_LENGTH];
    int numProducts;

    inputProductNames(products, &numProducts);

    int sortOrder;
    printf("Sort in:\n1. Ascending\n2. Descending\nEnter your choice (1 or 2): ");
    scanf("%d", &sortOrder);
    getchar(); 

    sortProductNames(products, numProducts, (sortOrder == 1));

    printSortedArray(products, numProducts);

    return 0;
}


