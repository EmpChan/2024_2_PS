#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if((a+b)%2!=0 || (a<b)){
        cout << -1;
        return 0;
    }
    cout << max((a+b)/2, a - (a+b)/2) << ' ' << min((a+b)/2, a - (a+b)/2);
}