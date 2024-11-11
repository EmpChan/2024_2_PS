#include <iostream>

using namespace std;

int arr[1000];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        int mini = i;
        for(int j=i+1; j<n;j ++){
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    int s = 0,cnt = 0;
    for(int i=0; i<n; i++){
        s+=cnt+arr[i];
        cnt += arr[i];
    }
    cout << s;

    return 0;
}