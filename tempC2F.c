/* Programa para conversão de temperatura Celsius em Fahrenheit 
// by @flgorgonio, Jul/2019                                     */
#include <stdio.h>

float converte (float c) {

    float f; 
    f = 1.8*c + 32; 
    return f; 

} 


int main (void) { 

    float t1 = 0.0f; 
    float t2 = 0.0f; 
    printf("Digite a temperatura em Celsius: "); 
    scanf("%f",&t1);
    t2 = converte(t1);
    printf("A temperatura em Fahrenheit é: %f\n", t2);

   
    return 0; 
} 
