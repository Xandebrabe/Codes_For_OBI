#include<stdio.h>
int main(){
    int a,b, wei =0, weii =0, final=0;
    scanf("%d%d",&a , &b);
    wei = (a * 4);
    weii = (b * 6);
    final = (wei + weii)/10;
    printf("%d",final);
    return 0;
}