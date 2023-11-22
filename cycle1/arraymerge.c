#include <stdio.h>
int main() {
    int array1[100], array2[100], mergedArray[200];
    int n1, n2, mergedSize;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter elements of the first array: ");
    for (int i = 0; i < n1; i++) {
    scanf("%d", &array1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }
    mergedSize = n1 + n2;
    for (int i = 0; i < n1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = array2[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
