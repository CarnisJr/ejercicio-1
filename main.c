#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
        
    
    int num, numInverso, numAmstrong, numAuxAmstrong;
    int i, j, aux, aux1, auxCont, cont, fact, selector; 

    do{

        fact = 1;
        printf("Menu\n");
        printf("1. For\n2. Do While\n3. While\n4. Palindromo\n5. Amstrong\n6. Salir\n\n");
        scanf("%d", &selector);
        system("cls");

        switch (selector){

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
            if(aux == 0){
                printf("El factorial de %d es: %d\n", num, fact);
            }else{

                do{
                
                fact *= aux--;

                }while(aux > 1);
                printf("El factorial de %d es: %d\n", num, fact);
            }
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
            
            printf("Numero Palindromo\n\n");
            numInverso = 0;
            cont = 0;
            i = 1;
            j = 1;
            printf("Ingresar un numero: ");
            scanf("%d", &num);
            aux = num;

            //Contador de digitos
            while(aux > 0){

                aux = aux / 10;
                cont++;
            }
            while(cont - 1 > 0){
                i *= 10;
                cont--;
            }

            for(i; i > 0; i /= 10){

                aux = num / i;
                aux1 = aux % 10;
                numInverso += (aux1 * j);
                j *= 10;
            }

            printf("%d\n", numInverso);

            if(num == numInverso){

                printf("ES PALINDROMO\n");
            }else{
                printf("No es palindromo\n");
            }

            system("pause");
            system("cls");
            break;

        case 5:

            /*Codigo del problema del viernes*/
            printf("Número de amstrong\n\n");
            cont = 0;
            i = 1;
            numAmstrong = 0;
            printf("Ingresar un numero: ");
            scanf("%d", &num);
            auxCont = num;
            aux = num;

            //Contador de digitos
            while(auxCont > 0){

                auxCont = auxCont / 10;
                cont++;
            }

            while(aux > 0){

                j = cont;
                aux = num / i;
                aux1 = aux % 10;
                i *= 10;
                numAuxAmstrong = aux1;

                while(j - 1 > 0){

                    numAuxAmstrong *= aux1;
                    j--;
                }
                numAmstrong += numAuxAmstrong;
            }

            if(num == numAmstrong)
                printf("Es un numero de amstrong\n");
            else
                printf("No es un numero de amstrong\n");
            
            system("pause");
            system("cls");
            break;

        case 6:

            printf("SALIENDO...\n");
            system("pause");
            system("cls");
            break;

        default:

            printf("ERROR\n\n");
            system("pause");
            system("cls");
            break;
        }
    }while(selector != 6);

    return 0;
}