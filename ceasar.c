#include <stdio.h>
#include <stdlib.h>


void caesar_encrypt(char slovo[]){
    int i = 0;
    while (1){
        if ('\0' == slovo[i]){
            break;
        }
        slovo[i] += 3;
        i++;
    }
    i = 0;
    while (1){
        if ('\0' == slovo[i]){
            break;
        }
        printf("%c", slovo[i]);
        i++;
    }
}

int main(){
    char slovo[] = {'Z', 'K', 'O', 'U', 'S', 'K', 'A', '\0'};
    caesar_encrypt(slovo);
    return 0;
}