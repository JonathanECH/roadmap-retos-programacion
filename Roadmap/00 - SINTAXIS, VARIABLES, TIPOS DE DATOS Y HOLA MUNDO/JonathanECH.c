// URL de c++ ->  https://isocpp.org/


//Esto es un comentario en una linea

/*
Estos son 
comentarios
en 
varias
lineas
*/

//Ejemplo de variable
#include <stdio.h>
#include <stdbool.h>
int main (){
/*EL (char) es para las variable de tipo caracter.
El [50] es para que el nombre tenga un maximo de 50 caracteres. 
Nota: puedes ponerle menos o más caracteres si quieres.*/
char nombre[50];

//ejemplo de como se usar esta variable de tipo caracter:

//Aqui le pregunto al usuario su nombre
printf("Cual es tu nombre? ");
//Aqui el usuario coloca su nombre
scanf("%s", nombre);
/*aqui le muesto un hola y el nombre suyo 
Ejemplo de como seria: ¡Hola! Juan
*/
printf("¡Hola, %s!\n", nombre);

//ejemplo de una constante
/*una constante en un valor que no cambia. 
Las constantes se pueden definir por el programador. 
Pero tambien los lenguajes de programacion tienen sus propias constantes predefinidas
como por ejemplo PI o la gravedad*/

//ejemplo de constante definida por el programador:
const int Maximo_numero = 50;

//Variable de todos los tipos de datos

//tipos numericos:
int CantidadDpersonas = 20; //Este es tipo entero (sin decimales)
short colores = 4; //Este es tipo entero (sin decimales) , se utiliza para representar números enteros de tamaño reducido. Es decir, ocupa menos espacio en memoria que un tipo de dato entero estándar (int).
float Pi = 3.1415; // este es de tipo flotante (decimal)
double gravedad = 9.81; // este es de tipo flotante (decimal) , se utiliza para representar números de punto flotante de doble precisión. Esto significa que puede almacenar números con una parte decimal, y con un rango numérico y precisión mucho mayor que los tipos de datos de punto flotante de menor precisión como float.

//tipo caracter:
char inicial= 'A';

//tipos booleanos:

//tipo booleano
bool Si, No;
Si= true;
No= false;

//tipo Booleano (simulado):
int esAdulto = 1; // Verdadero (edad >= 18)

//Imprimir ¡Hola y mi lenguaje de progracación!
printf("¡Hola, C! ");

return 0;
}
