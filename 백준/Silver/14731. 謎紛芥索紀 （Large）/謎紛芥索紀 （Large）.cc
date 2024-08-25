#include <iostream>
#define MAX 1000000007

using namespace std;

long long mypow(long long b){
    if(b == 1) return 2;
    else if(b<=0) return 1;
    long long tmp = (mypow(b/2))%MAX;
    if(b%2 == 0){
        return (tmp * tmp)%MAX;
    }
    else{
        return (tmp * tmp * 2)%MAX;
    }
}

int main(){
    int n;
    long long s = 0,a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        s = (s + (((b * (a))%MAX) * mypow(b-1))) % MAX;
    }    

    cout << s % MAX;

    return 0;
}