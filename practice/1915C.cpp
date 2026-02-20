#include <bits/stdc++.h>

std::string isPerfectSquare(long long n){
    long long l = 0;
    long long r = 20000000000;
    while(l <= r){
        long long mid = l+(r-l)/2;
        if(mid*mid == n){
            return "YES";
        }else if(mid*mid < n){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    return "NO";
}

int main(){
    int t = 0;
    std::cin >> t;
    while(t > 0){
        t--;
        int n = 0;
        std::cin >> n;
        long long sum = 0;
        for(int i = 0;i<n;i++){
            long long val = 0;
            std::cin >> val;
            sum += val;
        }
        std::cout << isPerfectSquare(sum) << std::endl;
    }
}