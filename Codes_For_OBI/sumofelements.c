#include<stdio.h>
int main(){
    int a, i = 0;
    int o;
    int sum =0;
    scanf("%d", &a);
    for(i = 0;i < a;i++){
        scanf("%d", &o);
        sum += o;
    }
    printf("%d", sum);
    return 0;
}