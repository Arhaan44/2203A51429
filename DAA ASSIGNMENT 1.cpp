#include <stdio.h>
#include <stdlib.h>
int compareAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int compareDesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    int *prices = (int *)malloc(n * sizeof(int));
    printf("Enter Book Prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    int sortOrder;
    printf("Sorting by price (0 for low to high, 1 for high to low): ");
    scanf("%d", &sortOrder);
    if (sortOrder == 0) {
        qsort(prices, n, sizeof(int), compareAsc);
    } else {
        qsort(prices, n, sizeof(int), compareDesc);
    }
    printf("Sorted Prices:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", prices[i]);
    }
    free(prices);
    return 0;
}
