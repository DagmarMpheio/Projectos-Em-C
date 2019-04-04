#include <stdio.h>
#include <string.h>
// src = a string a ser cifrada
// chave = o tamanho do deslocamento das letras, exemplo 3 -> 'a' seria 'd'
void CrifaDeCesar(char *src){
    int i = 0;
    strlwr(src);
    // lower case = diminui as letras maísculas em minúsculas
    while(src[i] != 0)	{
            // ASCII
            // A = 97;
            // Z = 122;
        if((src[i] + 3) > 122){
            src[i] -= 26;
        }
        if((src[i] + 3) < 97){
            src[i] += 26;
        }
        src[i] = src[i] + 3;
        i++;
        }
}
int main(){
    char a[30] ;
    printf("\nDigite o texo a ser encriptado:");
    gets(a);
    CrifaDeCesar(a);
    printf("%s\n", a);
    getchar();
    return 0;
    }
