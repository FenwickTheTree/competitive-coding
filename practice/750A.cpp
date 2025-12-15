#include <bits/stdc++.h>


int num_problems(int n, int k, const int maxTime){

    int timeleft = maxTime - k;
    for(int i = 1; i <= n; i++){
        timeleft -= 5*i;
        //std::cout << timeleft << " " << i << " " << n << std::endl;
        if(timeleft < 0){
            return i - 1;
        }
    }
    return n;
}

int search_prob(int n, int k, const int maxTime) {
    
    // 1. Use long long for the available time
    long long time_limit = (long long)maxTime - k;
    int ans = 0; 
    
    // Search space for the number of problems
    int l = 1; 
    // The maximum possible problems is the lesser of N and the problem count for 240 mins (approx 48)
    int r = n; 

    while (l <= r) {
        int mid = l + (r - l) / 2;
        
        // 2. Calculate time needed using long long (5LL forces 64-bit multiplication)
        long long time_needed = 5LL * (long long)mid * (mid + 1) / 2;

        if (time_needed <= time_limit) {
            // FEASIBLE: mid is a possible answer. Store it and try to find a larger one.
            ans = mid; 
            l = mid + 1;
        } else {
            // NOT FEASIBLE: mid is too high. Search lower.
            r = mid - 1;
        }
    }
    return ans;
}


int main(){
    int n = 0;
    int k = 0;
    std::cin >> n >> k;
    std::cout << search_prob(n, k, 240) << std::endl;
    return 0;
}


//[T,T,T,T,T,T,F,F,F,F,F]