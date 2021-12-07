#include<stdio.h>

int main() {
    int alfabeto[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 120, 122};
    int vogal[]    = {97, 97, 97, 101, 101, 101, 101, 105, 105, 105, 105, 105, 111, 111, 111, 111, 111, 111, 117, 117, 117, 117, 117, 117};
    int consoante[]= {97, 99, 100, 102, 101, 103, 104, 106, 105, 107, 108, 109, 110, 112, 111, 113, 114, 115, 116, 118, 117, 120, 122, 122};

    char string[31], final[91], c;

    scanf("%s", string);

    c = string[0];
    int i = 0, j = 0, k;

    while(c != '\0'){
        int asc = c;
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
            
            final[j] = c;

            for(k = 0; k <= 24; k++){
                if(asc == alfabeto[k]){
                    final[j + 1] = vogal[k];
                    final[j + 2] = consoante[k];
                }
            }

            j += 3;
        }
        else{
            final[j] = c;
            j++;
        }

        i++;
        c = string[i];
    }

    printf("%s", final);
    return 0;
}

