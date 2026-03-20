#include <bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<int> x(n);
    std::vector<int> y(n);
    for(int &i : x){
        std::cin >> i;
    }
    for(int &i : y){
        std::cin >> i;
    }
    int maxD=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int dist = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]); 
            maxD = std::max(maxD, dist);
        }
    }
    std::cout << maxD;

    return 0;
}