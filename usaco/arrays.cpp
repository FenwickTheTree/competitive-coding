#include <array>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
    array a {"a"}; // std::array
    vector<int> b = {4,2,3,4,5,6}; // dynamic array
    int c[5]{};// c-style array
    for(vector<int>::iterator it = b.begin(); it != b.end(); it ++){
        cout << *it << endl;
    }

    for (auto e : b){
        cout << e;
    }
}