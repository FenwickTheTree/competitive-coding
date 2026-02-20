#include <array>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
    array a {"a"}; // std::array
    vector<int> b(5); // dynamic array
    int c[5]{};// c-style array
    for(int i =0;i<size(c);i++){
        cout << c[i] << endl;
    }
}