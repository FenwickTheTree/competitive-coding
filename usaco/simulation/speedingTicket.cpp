#include <bits/stdc++.h>
using namespace std;

int getSpeedLimitAt(int mileMarker, vector<pair<int,int>> limits){
    for(pair<int,int> seg: limits){
        if(mileMarker < seg.first){
            return seg.second;
        }
    }
}

int main(){
    int m, n;
    cin >> n >> m;
    vector<pair<int,int>> limits;
    vector<pair<int, int>> speeds;
    int len = 0;
    while(n > 0){
        n --;
        int l,s;
        cin>>l>>s;
        len += l;
        limits.push_back(pair<int,int>(len,s));
    }
    len = 0;
    while(m > 0){
        m --;
        int l,s;
        cin>>l>>s;
        len+=l;
        speeds.push_back(pair<int,int>(len,s));
    }
    int maxBreach = 0;
    for(int i = 0;i<100;i++){
        int speedLimit = getSpeedLimitAt(i, limits);
        int bessieSpeed = getSpeedLimitAt(i,speeds);
        maxBreach = max(maxBreach, bessieSpeed - speedLimit);
    }

    cout << maxBreach << endl;
    return 0;
}