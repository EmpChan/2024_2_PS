#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n,t,cnt = 0,x=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        x^=t;
        if(t>1)cnt |= x>1;
    }
    if(cnt)cout << (!x?"cubelover":"koosaga");
    else cout << (x?"cubelover":"koosaga");
    return 0;
}