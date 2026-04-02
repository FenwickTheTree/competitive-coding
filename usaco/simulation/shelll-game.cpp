/**
 * Shell Game : https://usaco.org/index.php?page=viewproblem2&cpid=891
 */
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n = 0;
    cin >> n;
    vector<int> shells(3); // this holds the current postion of shells
    vector<int> scenario(3); // this simulates the scenario, there can be only three
    // cases, case 1 is when pebble is under shell 1 at the start of the game, and so 
    // on and so forth.

    while(n > 0){
        int a, b, g;
        cin >> a >> b >> g;
        a--;b--;g--;
        swap(shells[a], shells[b]);
        scenario[shells[g]] ++;
        n --;
    }
    cout <<  max({scenario[0], scenario[1], scenario[2]});
    return 0;
}