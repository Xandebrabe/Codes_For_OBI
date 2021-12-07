#include<stdio.h>
int main(){
    int a,b;
    int area = 0;
    scanf("%d %d", &a , &b);
    area = a*b;
    if(((1 <= a) && (a <= 1000)) && (( 1 <= b) && (b <= 1000))){
        printf("%d", area);
    }
    return 0;
}