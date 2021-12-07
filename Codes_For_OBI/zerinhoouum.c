#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a ,&b , &c);
    if(((a == 1) || (a == 0)) && ((b == 1) || (b == 0)) && ((c == 1) || (c == 0))){
        if(((a == 1) && (c == 1) && (b == 1)) || ((a == 0) && (c == 0) && (b == 0))){
            printf("*");
        }
        else if(((a == 1) && (b == 1)) || ((a == 0) && (b == 0))){
            printf("C");
        }
        else if((((b == 1) && (c == 1)) || ((b == 0) && (c == 0)))){
            printf("A");
        }
        else if((((a == 1) && (c == 1)) || ((a == 0) && (c == 0)))){
            printf("B");
        }
    }
    return 0;
}