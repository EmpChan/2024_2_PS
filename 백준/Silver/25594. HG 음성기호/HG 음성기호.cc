#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<char,string>dict;
string arr[] = {
    "aespa","baekjoon","cau","debug","edge",
    "firefox","golang","haegang","iu","java","kotlin","lol","mips","null","os","python",
    "query","roka","solvedac","tod","unix","virus","whale","xcode","yahoo","zebra"
};
vector<char>v;

int main(){
    string s;
    cin >> s;
    for(char i='a'; i<='z'; i++){
        dict[i] = arr[i-'a'];
    }
    int i = 0;
    bool flag = 0;
    while(i<s.size()){
        int size = dict[s[i]].size();
        v.push_back(s[i]);
        for(int j=i; j<i+size; j++){
            if(j>=s.size() || s[j] != dict[s[i]][j-i]){
                flag = 1;
                break;
            }
        }
        if(flag)break;
        i +=size;
    }
    if(flag){
        cout << "ERROR!";
    }
    else{
        cout << "It's HG!\n";
        for(auto j : v){
            cout << j;
        }
    }
    
    return 0;
}