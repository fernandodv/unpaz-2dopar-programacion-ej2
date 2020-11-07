/******************************************************************************

Utilizando funciones y un menú se pide que realice el siguiente programa
El menú tiene dos opciones:
1- Mostrar el vector en forma inversa a la ingresada
2- Buscar el mayor valor cargado en el vector y la posición que se encuentra
El vector tiene un tamaño de 10 posiciones y se carga en forma completa


*******************************************************************************/

#include <stdio.h>

/*void buscarMayor(numero){
    printf("%d" , numero);
}*/


int main()
{
    int i, mayor = 0, posicion, opcionMenu = 1;
    int vector[10];



    while(1)
    {
        // cargamos el vector
        for(i=0;i<10;i++){
            printf("\nIngresa el valor %d : " , i );
            scanf("%d", &vector[i]);
        }    
        
        printf("\nIngresa la opcion del menu");
        scanf("%d" , &opcionMenu);
        
        if(opcionMenu==1){
    
            // Mostrar el vector de la forma inversa al ingresada
            for(i=9;i>=0;i--){
                printf("%d : " ,vector[i] );
            }
    
        }
        if(opcionMenu==2) {
            for(i=0;i<10;i++){
                if(i==0){
                    mayor = vector[i];
                    posicion = i;
                }else{
                    if(mayor<vector[i]){
                        mayor = vector[i];
                        posicion = i;
                    }
                }
            }
        
            printf("El máximo valor del vector es %d y se encuentra en la posicion %d", mayor, posicion);
            
        }
    }
    
    return 0;
}
