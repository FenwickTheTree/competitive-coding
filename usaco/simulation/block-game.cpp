#include <bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> charCount(26,0);
    
    while(n > 0){
        n--;
        std::string a,b;
        std::cin >> a >> b;
        std::string combined = a+b;
        std::cout << combined << std::endl;
        std::set<char> blocks;
        for(char c :  combined){
            blocks.insert(c);
        }
        for(char c:blocks){
            
            int j = charCount[c - 'a'];
            charCount[c-'a']+= j + 1;
            
        }
    }
    for(int c : charCount){
        std::cout << c << std::endl;
    }
    return 0;
}