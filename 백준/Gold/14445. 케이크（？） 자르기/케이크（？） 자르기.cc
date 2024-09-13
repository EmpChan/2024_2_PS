#include <iostream>
#include <vector>

using namespace std;
using lld = long long;

int main(){
    lld n;
    cin >> n;
    if(n==1){
        cout << 0;
        return 0;
    }
    cout << (n+1)/2;

    return 0;
}