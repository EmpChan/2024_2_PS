#include <stdio.h>
#include <string.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c<=b){
        printf("-1");
        return 0;
    }
    int earn = c-b;
    if(a%earn == 0){
        printf("%d",a/earn+1);
    }
    else{
        printf("%d",a/earn+1);
    }

    return 0;
}