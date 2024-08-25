#include <stdio.h>

int main() {

    int n, i, search;

    int found = 0;

    printf("\nEnter total number for array elements: ");

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++) {

        printf("\nEnter array[%d]: ", i);

        scanf("%d", &array[i]);

    }

    printf("\nEnter search item: ");

    scanf("%d", &search);

    for(i = 0; i < n; i++) {

        if(array[i] == search) {

            printf("\n%d is at index %d\n", search, i);

            found = 1;

        }

    }

    if (found == 0) {

        printf("\nSearch Element not found in the array\n");

    }

    return 0;

}