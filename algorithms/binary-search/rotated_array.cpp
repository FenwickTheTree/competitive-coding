#include <bits/stdc++.h>

int binary_search(int target, int s[], int l, int r){
    while(l + 1 < r){
        std::cout << "l: " << l << " r: " << r << std::endl;
        int mid = l + (r - l) / 2;
        if(s[mid] < target){
            l = mid + 1;
        } else {
            r = mid - 1 ;
        }
    }

    return r;
}


int main (){

    int s[] = {0,1,2,3,4,5,6};
    int n = sizeof(s) / sizeof(s[0]);
    int target = 0;

    int index = binary_search(target, s, 0, n - 1);
    std::cout << "index: " << index << std::endl;
    return 0;
}