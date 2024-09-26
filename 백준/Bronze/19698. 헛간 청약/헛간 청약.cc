#include <iostream>

using namespace std;

int main(){
    int n,m,k,h;
    cin >> n >> m >> k >> h;
    cout <<min(n, (m/h) * (k/h));
    return 0;
}