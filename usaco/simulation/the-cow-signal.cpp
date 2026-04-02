#include <bits/stdc++.h>

using namespace std;

vector<char> getAmplifiedRow(vector<char> row, int factor){
    vector<char> amplifiedRow;
    for(char c:row){
        for(int i=0;i<factor;i++){
            amplifiedRow.push_back(c);
        }
    }
    return amplifiedRow;
}

void print(vector<char> row){
    for(char r:row){
        cout << r;
    }
    cout << "" << endl;
}

int main(){
    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<char>> signal;
    while(m > 0){
        vector<char> row;
        for(int i = 0; i < n; i++){
            char c;
            if(cin >> c){row.push_back(c);}
        }
        signal.push_back(row);
        m--;
    }
    for(vector<char> r : signal){
        for(int i=0;i<k;i++){
            print(getAmplifiedRow(r,k));
        }
    }
    return 0;
}