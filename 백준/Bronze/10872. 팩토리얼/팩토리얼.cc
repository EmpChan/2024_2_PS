// #include <stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);

//     printf("%d",a+b);

// }

#include <stdio.h>

int factorial(int );

int main(){

    int a;
    scanf("%d", &a);

    printf("%d", factorial(a));
    
}

int factorial(int n){
    if(n<=1)
        return 1;
    else
        return n*(factorial(n-1));
}