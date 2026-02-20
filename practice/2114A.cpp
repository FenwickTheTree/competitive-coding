#include <bits/stdc++.h>


int isPerfectSquare(int n){
    int l = 0;
    int r = n;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(mid*mid == n){
            return mid;
        }else if (mid*mid < n ){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return -1;
}

int main(){
    int t = 0;
    std::cin >> t;
    while(t > 0 ){
        t--;
        std::string ystr;
        std::cin >> ystr;
        int year = std::stoi(ystr);
        int isSq = isPerfectSquare(year);
        if(isSq != -1){
            std::cout << "0 " << isSq << std::endl;
        }else{
            std::cout << "-1" << std::endl;
        }
    }
    return 0;
}