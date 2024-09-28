#include <iostream>
#include <string>

using namespace std;

int main(){
    int a,b,c;
    int cnt[10]={0};
    cin >> a >> b >> c;
    string k = to_string(a*b*c);
    for(auto i : k ){
        cnt[i-'0']++;
    }
    for(int i=0; i<10; i++){
        cout << cnt[i] <<'\n';
    }
    return 0;
}