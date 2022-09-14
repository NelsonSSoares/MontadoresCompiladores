#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;



int main()
{
    char str1[1000];
    char str2[1000];
    bool found = false;
    int count = 0;
    
    printf("Insert the first word!");
    scanf("%s",str1);
    printf("Insert the secound word!");
    scanf("%s",str2);
    
    if (strlen(str1) > 50 || strlen(str2) > 50){
        printf("String maior do que o esperado, insira palavras menos de 50 caracteres.");
    }
    else {    
        for (int i = 0; i < strlen(str1); i++){
            for (int j = 0; j < strlen(str2); j++){
                if (str1[i] == str2[j]){
                found = true;
                count = count +1;
                cout << str1[i] << " || ";
                }
            }
        };
        if (found = true){
            printf(" \n Encontrado letras em comum, total de letras: %d", count);
        }
        else {
            printf(" \n Não foi encontrado letras em comum.");
        };
    };
    return 0;
}
