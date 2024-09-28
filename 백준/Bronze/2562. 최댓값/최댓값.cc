#include <iostream>
#include <string>

using namespace std;

int main(){
    int mv=0,mp=0,t=9,tmp;
    while(t--){
        cin >> tmp;
        if(tmp > mv){
            mp = 9 - t;
            mv = tmp;
        }
    }
    cout << mv << '\n' << mp;
    return 0;
}