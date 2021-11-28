#include <stdio.h>
#include <math.h>
void Circulo(float radio);
int main(){
}
void Circulo(float radio){
   static float PI = 3.141592653589793;
   printf("El area  del circulo es: %f", PI * pow(radio,2) );
   printf("Su circunferencia es igual a: %f", PI * 2 * radio );
   printf("El Diamentro es: %f", radio *2 );
}
