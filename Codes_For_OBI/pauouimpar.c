#include<stdio.h>
int main(){
    int A, B;
    int resto = 0;
    scanf("%d %d", &A , &B);
    resto = (A + B) % 2;
    if((A <= 10) && (B <= 10)){
        if(resto == 1){
            printf("Cino");
        }
        else{
            printf("Bino");
        }
    }
    return 0;
}