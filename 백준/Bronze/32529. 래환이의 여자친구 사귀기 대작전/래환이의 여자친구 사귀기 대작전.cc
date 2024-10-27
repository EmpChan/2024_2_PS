#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin >> v[i];
    int s = 0;
    for(int i=n-1; i>=0; i--){
        s+=v[i];
        if(s >=m){
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}