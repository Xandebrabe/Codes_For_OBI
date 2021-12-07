#include<stdio.h>
int main(){
    int X;
    scanf("%d", &X);
    if(X < 1000){
        if(X == 0){
            printf("nulo");
        }
        else if(X < 0){
            printf("negativo");
        }
        else{
            printf("positivo");
        }
    }
    return 0;
}