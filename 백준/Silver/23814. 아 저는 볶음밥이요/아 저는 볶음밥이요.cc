#include <iostream>
#define MAX 1000000007

using namespace std;
using lld = long long;

int main(){
    lld d,n,m,k;
    cin >> d >> n >> m >> k;
    n%=d;
    m%=d;
    lld maxi = k/d, last = k%d;
    if(n < m){ // 더 큰쪽을 n으로 가정함. 
        lld tmp = m;
        m = n;
        n = tmp;
    }
    if(n + last >=  d){
        last -= d-n;
        if(m + last >= d){
            last -= d-m;
        }
        cout << maxi * d + last;
    }    
    else if(maxi > 0){
        last+=d;
        maxi--;
        if(n + m + last >= 2*d){
            last -= d-n + d-m;
        }
        cout << maxi * d + last;
    }
    else{
        cout << k;
    }

    return 0;
}