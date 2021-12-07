#include<stdio.h>
int main(){
    int P, R;
    scanf("%d %d ", &P , &R);
    if((P == 1) || (P == 0)){
        if((R == 1) || (R == 0)){
            if((P == 1 && R == 1)){
                printf("A");
            }
            else if((P == 1 && R == 0)){
                printf("B");
            }   
            else if(P == 0){
                printf("C");
            }
        }    
    }
    return 0;
}