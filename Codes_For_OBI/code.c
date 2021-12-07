#include<stdio.h>
int main(){
    int a, n, z;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
    }
    if(a == '100'){
        z++;
    }
    printf("%d",z);
    
    return 0;
}