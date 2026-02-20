#include <bits/stdc++.h>

int getMinAnimals(int n){
    return n/4 + (n%4)/2;
}

int main(){

    int t = 0;
    std::cin >> t;
    while(t > 0){
        int n = 0;
        std::cin >> n;
        std::cout << getMinAnimals(n) << std::endl;
        t--;
    } 
}