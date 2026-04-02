#include <bits/stdc++.h>

using std::vector;
using std::cin;
using std::cout;

template <typename T> int index(const vector<T> &vec, const T &n){
        for(auto i = 0;i<vec.size();i++){
            if(vec[i] == n){
                return i;
            }
        }
        return -1;
}

int main(){
    int k,n;
    std::cin >> k >> n;
    std::vector<std::vector<int>> sessions(k, std::vector<int>(n));
    while(k > 0){
        k--;
        for(auto i =0;i<n;i++){
            std::cin >> sessions[k][i];
        }
    }

    int consitentPairs = 0;
    for(auto c1 = 1;c1<=n;c1++){
        for(auto c2=1;c2<=n;c2++){
            if(c1==c2){continue;}
            bool consistent = 1;
            for(vector<int> sess : sessions){
                if(index(sess, c1) > index(sess,c2)) {consistent = 0;}
            }
            consitentPairs += consistent;
        }
    }

    cout << consitentPairs;

    return 0;
}