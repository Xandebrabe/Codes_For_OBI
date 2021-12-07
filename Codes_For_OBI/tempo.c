#include<stdio.h>
#include<string.h>

int main() {
    int contatos[100], esperando[100], tempo[100], n, x, time = 0;
    int i, j;
    char c[1];

    for(i = 0; i < 100; i++){
        contatos[i] = 0;
        esperando[i] = 0;
        tempo[i] = 0;
    }

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        
        scanf("%s %d", c, &x);
        x--;
        
        if(time >= 1){
            for(j = 0; j < 100; j++){
                if(esperando[j])
                    tempo[j]++;
            }
        }
        
        if(!strcmp(c, "R")){
            esperando[x] = 1;
            time++;
        }

        if(!strcmp(c, "E")){
            esperando[x] = 0;
            time++;
        }

        if(!strcmp(c, "T")){
            for(j = 0; j < 100; j++){
                if(esperando[j])
                    tempo[j] += (x + 1);
            }
            time = 0;
        }
    }

    for(i = 0; i < 100; i++){
        if(tempo[i]){
            if(!esperando[i]){
                printf("%d %d", i + 1, tempo[i]);
            }
            else
                printf("%d %d", i + 1, -1); 
        }
    }

    for(i = 0; i < 100; i++){
        printf("%d", esperando[i]);
    }

    return 0;
}

