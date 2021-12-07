#include<stdio.h>
int main(){
    int A, B;
    int media =0;
    scanf("%d %d", &A , &B);
    media = (A + B)/2;
    if(media >= 7){
        printf("Aprovado");
    }
    else if(4 <= media && media < 7){
        printf("Recuperacao");
    }
    else if(media < 4){
        printf("Reprovado");
    }
    return 0;
}