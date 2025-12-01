#include <iostream>

int binary_search_right_boundary(int s[], double key, int low, int high) {
    

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(s[mid] <= key) { //every time we find the key, discard left and move left wall to key + 1 to check the right boundary
            low = mid + 1;
        } else { //if you land on the part of array greater than key, then move left wall to mid - 1, the high wall moves until it finds
            // the last occurrence of key 
            high = mid - 1;
        } 
    }

    return high;
}

int binary_search_left_boundary(int s[], double key, int low, int high) {
    

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(s[mid] < key) { //every time we find the mid less than key, discard left and move left wall to key + 1 to check the right boundary
            low = mid + 1;
        } else { //if key is found or mid is larger than key, we move right wall to mid - 1 to continue searching for the left boundary
            high = mid - 1;
        } 
    }

    return low;
}

int main() {
    int s[] = {0,1,3,4,4,4,5,6};
    int n = sizeof(s) / sizeof(s[0]);
    double key = 4;

    int rightBoundary = binary_search_right_boundary(s, key, 0, n - 1);
    int leftBoundary = binary_search_left_boundary(s, key, 0, n - 1);

    std::cout << "right boundary: " << rightBoundary << " value: "<< s[rightBoundary]<<std::endl;
    std::cout << "left boundary: " << leftBoundary << " value: "<< s[leftBoundary]<<std::endl;


    return 0;
}