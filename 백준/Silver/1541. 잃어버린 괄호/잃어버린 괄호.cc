#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string a;
    cin >> a;
    vector<int>nums;
    int x = 100;
    string tmp = "";
    for(int i=0; i<a.size(); i++){
        if(a[i]>='0' && a[i]<='9'){
            tmp+=a[i];
        }
        else{
            nums.push_back(stoi(tmp));
            tmp = "";
            if(x == 100 && a[i] == '-')x = nums.size();
        }
    }
    if(tmp!=""){
        nums.push_back(stoi(tmp));
    }
    int s = 0;
    for(int i=0; i<min(x,int(nums.size())); i++){
        s+=nums[i];
    }
    for(int i=x; i<nums.size(); i++){
        s-=nums[i];
    }
    cout << s;
    return 0;
}