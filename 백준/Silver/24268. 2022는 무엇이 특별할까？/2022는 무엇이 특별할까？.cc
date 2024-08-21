#include <iostream>
#include <deque>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

long long mini = -1;
long long n,m;
int arr[10] = {};

long long calc(){
    int s = 0;
    for(int i=0; i<m; i++){
        s+=i*pow(m,arr[i]-1);
    }
    return s;
}

void backtrack(int t){
    if(t==m){
        long long now = calc();
        if(now > n){
            mini = mini==-1?now:min(mini,now);
        }
        return;
    }
    for(int i=0; i<m; i++){
        if(arr[i] || (i==0 && t==m-1))continue;
        arr[i] = t+1;
        backtrack(t+1);
        arr[i] = 0; 
    }
}

int main(){
    cin >> n >> m;
    backtrack(0);
    cout << mini;
    return 0;
}