#include <stdio.h>

int main() {
    int a[100], n, key, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to count: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key)
            count++;
    }

    printf("Occurrences = %d\n", count);

}
