#include<stdio.h>
int main(){
    int i;
    int n;
    int j = 0;
    int soma = 0;
    scanf("%d", &j);
    for (i = 1; i <= j ; i++){
        scanf("%d", &n);
        soma =+ n;
        if (soma >= 1000000)
            break;
        }
    printf("%d",i);
    return 0;
}