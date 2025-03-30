include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
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
        cout << arr[i] <<endl;
    }
    cout << endl;
    
    return 0;
}
