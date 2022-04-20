//TP1 - BELUCCI GARIBOTTO, Germán Patricio - Curso: K2002
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main (){
    char caracter = '\0';
    printf("Ingrese texto a procesar: ");
    while (caracter != '\n'){
        caracter = getchar();
        if(!isdigit(caracter)){
            if(caracter == toupper(caracter)) 
                printf("%c", tolower(caracter));

            else if(caracter == tolower(caracter))
                printf("%c", toupper(caracter));

            else 
                printf("%c", caracter);
        }        
    }    
    return EXIT_SUCCESS;
}