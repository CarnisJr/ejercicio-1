#include<stdio.h>
#include<stdlib.h>

int main(void){
        
    int num, aux, fact, selector;
    int numPalindromo[5], numPalindromoInverso[5], cont = 0;


    do{
        fact = 1;
        printf("Menu\n");
        printf("1. For\n2. Do While\n3. While\n4. Palindromo\n10. Salir\n\n");
        scanf("%d", &selector);

        switch (selector)
        {
        case 1:
            printf("Con for\n\n");
            printf("Ingrese un numero entero positivo: ");
            scanf("%d", &num);
            aux = num;
            for (aux; aux > 1; aux--){
                
                fact *= aux;                
            }
            printf("El factorial de %d es: %d\n", num, fact);
            system("pause");
            system("cls");

            break;
        case 2:
            printf("Con do while\n\n");
            printf("Ingrese un numero entero positivo: ");
            scanf("%d", &num);
            aux = num;
            do{
            
               fact *= aux--;

            }while(aux > 1);
            printf("El factorial de %d es: %d\n", num, fact);
            system("pause");
            system("cls");

            break;
        case 3:
            printf("Con While\n\n");
            printf("Ingrese un numero entero positivo: ");
            scanf("%d", &num);
            aux = num;

            while(aux > 1){

                fact *= aux--; 
            }
            printf("El factorial de %d es: %d\n", num, fact);
            system("pause");
            system("cls");
            break;
        
        case 4:
            
            for(int i = 0; i < 5; i++){

                printf("Ingresa el primer digito del numero: ");
                scanf("%d", &num);
                numPalindromo[i] = num;
                numPalindromoInverso[5-i] = num;
            }
            
            for(int i = 0; i < 5; i++){

                printf("%d", numPalindromo[i]); 
            }

            printf("\n");

            for(int i = 1; i <= 5; i++){

                printf("%d", numPalindromoInverso[i]); 
            }

            printf("\n");


            for(int i = 0; i < 5; i++){

                if(numPalindromo[i] == numPalindromo[4-i])
                    cont++;
            }

            if(cont == 5)
                printf("Es Palidromo\n");
            else
                printf("No es Palidromo\n");

            break;

        default:
            printf("ERROR");
            break;
        }


    }while(selector != 10);

    
    system("pause");
    return 0;
}