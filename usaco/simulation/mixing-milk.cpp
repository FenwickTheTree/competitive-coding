#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> capacity(3);
    vector<int> milk(3);
    for(int i =0; i < 3; i++){
        cin >> capacity[i] >> milk[i];
    }
    int pour = 100;
    int state = 0; 
    while(pour > 0){
        pour --;
        if(state == 0){
            if(capacity[1] - milk[1] > milk[0]){
                milk[1] += milk[0];
                milk[0] = 0;
            }else{
                int reamainingCap = capacity[1] - milk[1];
                milk[1] = capacity[1];
                milk[0] -= reamainingCap;
            }
        }
        if(state == 1){
            if(capacity[2] - milk[2] > milk[1]){
                milk[2] += milk[1];
                milk[2] = 0;
            }else{
                int reamainingCap = capacity[2] - milk[2];
                milk[2] = capacity[2];
                milk[1] -= reamainingCap;
            }
        }
        if(state == 2){
            if(capacity[0] - milk[0] > milk[2]){
                milk[0] += milk[2];
                milk[2] = 0;
            }else{
                int reamainingCap = capacity[0] - milk[0];
                milk[0] = capacity[0];
                milk[2] -= reamainingCap;
            }
        }

        state ++;
        if(state > 2){
            state = 0;
        }

    }

    for(auto m : milk){
        cout << m <<endl;
    }
    return 0;
}