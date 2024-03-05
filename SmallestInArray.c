#include <stdio.h>

int main() {
    int n, i, pos;
    float num[100], min;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &num[i]);
    }

    min = num[0];
    pos = 0;

    for (i = 1; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
            pos = i;
        }
    }

    printf("The smallest number is %.2f\n", min);
    printf("The position of the smallest number is %d\n", pos + 1);

    return 0;
}
