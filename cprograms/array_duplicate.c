#include <stdio.h>
int main() {
    int arr[100],n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            
            if (arr[i] == arr[j]) {
                
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; 
                 j--; 
            }
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}