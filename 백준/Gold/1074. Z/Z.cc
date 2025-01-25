#include <iostream>
#include <vector>

using namespace std;

int count_it(int sx,int sy){
    if(sx <= 1  && sy<=1){
        return sx*2+sy;
    }
    int wx = 1;
    int wy = 1;
    while(wx*2 <= sx)wx*=2;
    while(wy*2 <= sy)wy*=2;
    if(wx == wy){ // 4사분면
        return count_it(sx-wx, sy-wy) + (wx*wx)*3;
    }
    else if (wx < wy){ // 2사분면
        return count_it(sx,sy - wy ) + (wy*wy);
    }
    else { // 3사분면
        return count_it(sx-wx,sy) + wx*wx*2;
    }
}

int main(){
    int n,r,c;
    cin >> n >> r >> c;

    cout << count_it(r,c);

    return 0;
}