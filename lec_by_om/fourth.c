//array intersection
#include <stdio.h>

int main() {
    int a[50], b[50], c[50];
    int n1, n2, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                
                int alreadyAdded = 0;
                for (int x = 0; x < k; x++) {
                    if (c[x] == a[i]) {
                        alreadyAdded = 1;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }

    if (k == 0)
        printf("No common elements found.\n");
    else {
        printf("Common elements are: ");
        for (int i = 0; i < k; i++)
            printf("%d ", c[i]);
        printf("\n");
    }

    return 0;
}