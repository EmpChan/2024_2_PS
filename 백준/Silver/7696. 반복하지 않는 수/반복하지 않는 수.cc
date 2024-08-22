#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>

using namespace std;

int ans[1000001];

void init(){
    int cnt = 1, t = 0;
    while(cnt<=1000000){
        string k = to_string(++t);
        int arr[10] = {}, flag = 0;
        for(auto i: k){
            if(arr[i-'0']){
                flag=1;
                break;
            }
            arr[i-'0']++;
        }
        if(flag)continue;
        ans[cnt++]=t;
    }
}

int main(){
    init();
    int n;
    cin >> n;
    while(n){
        cout << ans[n] << '\n';
        cin >> n;
    }

    return 0;
}