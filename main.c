/*
programita de promedio de 4 calificaciones
*/
#include<stdio.h>

int main(){
    float calif1 = 0;
    float calif2 = 0;
    float calif3 = 0;
    float calif4 = 0;
    float suma = 0; 
    float promedio = 0;

    printf("hola usuario una calificacion \n");
    scanf("%f",&calif1);
    printf("ahora otra \n");
    scanf("%f",&calif2);
    printf("una mas \n");
    scanf("%f",&calif3);
    printf("y por ultimo esta \n");
    scanf("%f",&calif4);

    suma = calif1 + calif2 + calif3 + calif4;
    promedio = suma/4;

    if(promedio >= 6){
        printf("======================================\ntupromedio es: %f \n felicidades estas aprobado :3\n======================================\n", promedio );
    }else{
        printf("======================================\ntu promedio es: %f \ngomene estas reprobado\n======================================\n", promedio );
    }

    return 0;
}