#include<stdio.h>
int main(){
    int A, B;
    int soma = 0;
    scanf("%d %d" , &A , &B);
    soma = A + B;
    if ((1<= A <= 50)&& (1<= B <= 50)){
        if(soma <= 50){
        printf("S");
        }
        else{
            printf("N");
        }
    }
    return 0;
}