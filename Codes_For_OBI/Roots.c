#include<stdio.h>
#include<math.h>
int main(){
    int j=0;
    float k=0;
    float r=0;
    scanf("%d",&j);
    for (int i = 0; i < j; i++)
    {
        scanf("%f",&k);
        r = sqrt(k);
        printf("%.4f\n", r);
    }
    
}