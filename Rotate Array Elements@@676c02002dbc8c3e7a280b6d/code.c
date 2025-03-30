#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    k = k % n; // Handle cases where k >= n
    int temp[k];
    
    // Store the first k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    
    // Shift remaining elements to the left
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }
    
    // Move temp elements to the end
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
    
    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
