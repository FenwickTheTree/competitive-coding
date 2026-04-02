#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::set;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> genome(2*n);
    for(auto i = 0;i < 2*n; i++){
        cin >> genome[i]; 
    }
    int count = 0;
    
    for(int i= 0;i<m;i++){
        for(int j= i+1;j<m;j++){
            for(int k= j+1;k<m;k++){
                set<string> seen;
                for(int s=0;s<n;s++){
                    auto cow = genome[s];
                    std::stringstream ss;
                    ss << cow[i] << cow[j] << cow[k];
                    seen.insert(ss.str());
                }
                bool found = false;
                for(int p=n;p<2*n;p++){
                    auto cow = genome[p];
                    std::stringstream ss;
                    ss << cow[i] << cow[j] << cow[k];
                    if(seen.count(ss.str())){
                        found = true;
                    }
                }
                if(!found){
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}