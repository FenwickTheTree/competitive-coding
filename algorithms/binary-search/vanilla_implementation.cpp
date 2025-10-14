#include <iostream>

int binary_search(int s[], int key, int low, int high) {
    
    if(low > high) {
        return -1; // Key not found
    }

    int mid = low + (high - low) / 2; // To avoid potential overflow

    if(s[mid] == key) {
        return mid; // Key found
    } else if(s[mid] > key) {
        return binary_search(s, key, low, mid - 1); // Search in the left half
    } else {
        return binary_search(s, key, mid + 1, high); // Search in the right half
    }
}

int main() {
    int s[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(s) / sizeof(s[0]);
    int key = 7;

    int result = binary_search(s, key, 0, n - 1);
    if(result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}