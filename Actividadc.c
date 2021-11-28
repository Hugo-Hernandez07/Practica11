#include <stdio.h>
int main(){
    void Numeros(int num1, int num2);
}
void Numeros(int num1, int num2){

   int nummayor;
    printf("Ingrese un numero");
    scanf("%i", num1);
    printf("Ingrese un numero");
    scanf("%i", num2);

   if (num1>num2){
      nummayor = num1;
   }   
   else{
      nummayor=num2;
   } 

   printf("%d", nummayor);

}
