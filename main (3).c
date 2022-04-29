#include <stdio.h>

int main(void) {// Punto de entrada al programa
  int edad = 0;//Creacion de variable y asignacion de edad
  int fecha =0;//Creacion de variable y asignacion de fecha

printf("Cual es tu fecha de nacimiento: " );//Imprime una informacion en la pantalla
  scanf("%d" , &fecha);// Pide un dato
  edad = 2022 - fecha; // Resta la fecha actual con la edad puesta
 if (edad < 0)// condicion de menor de cero
 {
 printf("Tu edad es: %d Menor de cero", edad );// imprime la condicion menor de cero
} else if (edad >110)// condicion de mayor que 110
 { 

 printf("Tu edad es: %d Mayor de 110, edad falsa", edad );// Imprime la condicion de edad falsa
} else if (edad >= 18)// condicion mayor o igual que 18
{
printf("Tu edad es: %d Puedes pasar", edad );//Imprime la condicion de mayor o igual que 18, puedes pasar
}
else{// si no se cumple ninguna de las condiciones anteriores, se ejecuta esta
  printf("Tu edad es: %d NO Puedes pasar", edad );
}//Imprime la condicion de menor o de 18, no puedes pasar

return 0;//termina la ejecución de una función
} 