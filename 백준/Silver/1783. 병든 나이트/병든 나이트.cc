#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(n == 1){
        cout << 1;
    }
    else if(n==2){
        cout << (min(m,8)+1)/2;
    }
    else{
        if(m<=4){
            cout << m;
        }
        else if(m==5){
            cout << m-1;
        }
        else{
            cout << m-2;
        }
    }
}