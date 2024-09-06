#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<char>s;
    string a;
    bool flag =0;
    cin >> a;
    for(auto i : a){
        if(i>='0' && i<='9'){
            s.push(i);
        }
        else if(i=='x'){
            flag = 1;
            break;
        }
        else{
            queue<char>ss;
            swap(s,ss);
            s.push(i);
        }
    }
    if(s.empty()){
        cout << 1;
        return 0;
    }
    else if (s.size() == 1 && s.front() == '-'){
        cout << -1;
        return 0;
    }
    if(s.front() == '+'){
        s.pop();
    }
    if(!flag){
        cout << 0;
        return 0;
    }
    while(!s.empty()){
        cout << s.front();
        s.pop();
    }
    return 0;
}
