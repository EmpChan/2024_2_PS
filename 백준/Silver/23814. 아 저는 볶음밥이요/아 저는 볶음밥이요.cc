#include <iostream>
int main(){long d,n,m,k,a,l,tmp;scanf("%ld%ld%ld%ld",&d,&n,&m,&k);n%=d;m%=d;
    a=k/d,l=k%d;
    if(n<m)std::swap(n,m); 
    if(n + l >=  d){
        l -= d-n;
        if(m + l >= d){
            l -= d-m;
        }
        printf("%ld",a * d + l);
    }    
    else if(a > 0){
        l+=d;
        a--;
        if(n + m + l >= 2*d){
            l -= d-n + d-m;
        }
        printf("%ld",a * d + l);
    }
    else{
        printf("%ld",k);
    }

    return 0;
}