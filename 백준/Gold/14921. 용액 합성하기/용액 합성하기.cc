#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<int>soup(n);
    for(int i=0; i<n; i++) cin >> soup[i];
    int l = 0,r = n-1;
    int mini = 200000001;
    while(l<r){
        if(abs(soup[l] + soup[r]) <abs(mini)){
            mini = soup[l] + soup[r];
        }
        if(abs(soup[l+1] + soup[r]) < abs(soup[l] + soup[r-1])){
            l++;
        }
        else{
            r--;
        }
    }

    cout << mini;
    return 0;
}