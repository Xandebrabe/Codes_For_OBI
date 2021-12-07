#include<stdio.h>
int main(){
    int T, Ti, Tii;
    int ouro, prata, bronze;
    scanf("%d%d%d",&T,&Ti,&Tii);
    if(T < Ti && Ti <Tii){
        ouro = 1;
        prata = 2;
        bronze = 3;
    }
    if(T < Tii && Tii < Ti){
        ouro = 1;
        prata = 3;
        bronze = 2;
    }
    if(Ti < T && T < Tii){
        ouro = 2;
        prata = 1;
        bronze = 3;
    }
    if(Ti < Tii && Tii < T){
        ouro = 2;
        prata = 3;
        bronze = 1;
    }
    if(Tii < T && T < Ti){
        ouro = 3;
        prata = 1;
        bronze = 2;
    }
    if(Tii < Ti && Ti < T){
        ouro = 3;
        prata = 2;
        bronze = 1;
    }
    printf("%d\n%d\n%d", ouro , prata , bronze);
    return 0;
}