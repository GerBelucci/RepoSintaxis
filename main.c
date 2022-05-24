//TP1 - BELUCCI GARIBOTTO, Germán Patricio - Curso: K2002
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main (){
    char caracter = '\0';
    printf("Ingrese texto a procesar: ");
    while (caracter != EOF){
        caracter = getchar();
        if(!isdigit(caracter)){
            if(caracter == toupper(caracter)) 
               putchar(tolower(caracter));

            else if(caracter == tolower(caracter))
                 putchar(toupper(caracter));

            else 
                 putchar(caracter);
        }        
    }    
    return EXIT_SUCCESS;
}
