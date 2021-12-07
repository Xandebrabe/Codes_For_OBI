#include<stdio.h>
int main(){
    int A ;
    int n;
    int i;
    int b =0;
    int sum = 0;
    int suma = 0;
    scanf("%d", &n);
    for (i = 0; i < n ; i++)
    {
        scanf("%d",&A);
        if(A == 2)
            b = 1 - b;
    }
    printf("%d\n%d", n%2, b);
    
    return 0;
}