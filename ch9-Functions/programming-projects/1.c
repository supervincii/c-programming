#include <stdio.h>

#define MAX_LEN 100

void selection_sort(int a[], int n);

int main(void) {
    int a[MAX_LEN], i, n;
    char ch;
    
    printf("Enter a series of integers: ");
    for (i = 0, n = 0; i < MAX_LEN; i++) {
        scanf(" %d", &a[i]);
        n++;
        if ((ch = getchar()) == '\n') {
            break;
        }
    }

    selection_sort(a, n);
    printf("Sorted array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n) {
    int max_idx = 0, temp;

    if (n <= 1) {
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] > a[max_idx])
            max_idx = i;
    }

    temp = a[max_idx];
    a[max_idx] = a[n - 1];
    a[n - 1] = temp;

    selection_sort(a, n - 1);
}
