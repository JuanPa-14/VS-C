#include <stdio.h>
#include <conio.h>
int a,b,Resultado;

main(){

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    Resultado = a+b;

    printf("El reultado de la suma es = %i\n", Resultado);
    
    if(Resultado <= 100){
        printf("Y es menor o igual que 100 :)");
    }
    if(Resultado >= 100){
        printf("Y es mayor o igual a 100 :D");
    }
    return 0;
}