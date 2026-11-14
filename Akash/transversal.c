#include <stdio.h>

int main() {
    int n;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    int arr[n];   // array of size n

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
