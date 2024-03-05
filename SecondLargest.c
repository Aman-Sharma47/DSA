#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int num[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int largest = num[0];
    int secondLargest = num[0];
    int pos = 0;

    for (i = 1; i < n; i++) {
        if (num[i] > largest) {
            secondLargest = largest;
            largest = num[i];
            pos = i;
        } else if (num[i] > secondLargest && num[i] < largest) {
            secondLargest = num[i];
        }
    }

    printf("The second largest number is %d\n", secondLargest);
    printf("The position of the second largest number is %d\n", pos + 1);

    return 0;
}
