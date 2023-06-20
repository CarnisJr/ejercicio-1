#include<stdio.h>
#include<stdlib.h>

int main(void){
        
    int num, aux, fact, selector;


    do{
        fact = 1;
        printf("Menu\n");
        printf("1. For\n2. Do While\n3. While\n4. Salir\n\n");
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
            continue;
            break;
            
        default:
            printf("ERROR");
            break;
        }


    }while(selector != 4);

    
    system("pause");
    return 0;
}