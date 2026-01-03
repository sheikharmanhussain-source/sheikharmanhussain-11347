//18. Program to find sum of elements of 2D array



#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10];
    int sum = 0;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}