#include<stdio.h>

int main(){
    char c;
    int i, n, m, total, vetord[61], vetore[61];

    scanf("%d", &n);

    for(i = 30; i<=60; i++){ //inicializa 0
        vetord[i] = 0;
        vetore[i] = 0;
    }

    for(i = 0; i < n; i++){
        scanf("%d %c", &m, &c);
        //printf("test");
        if(c == 'D'){
            vetord[m] += 1;
        }
        else
            vetore[m] += 1;
    }

    total = 0;

    for(i = 30; i<=60; i++){

        if( vetore[i] < vetord[i])
            total += vetore[i];
        else
            total += vetord[i];
    }

    printf("%d",total);
    return 0;
}