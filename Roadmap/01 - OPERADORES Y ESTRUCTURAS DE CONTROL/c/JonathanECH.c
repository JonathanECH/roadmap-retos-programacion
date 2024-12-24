#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
//TIPOS DE OPERADORES

//Operadores aritmeticos:
int a= 17 , b= 5 , resto;
double c= 15 , d= 7 , resultado;
//sumando dos numeros
printf("Suma: 15 + 7 = %d", a+b);	

printf("\n"); // El ("\n") es para que la resta de muestre en la otra linea y no pegada no la suma.

//restando dos numeros
printf("Resta: 15 - 7 = %d", a-b);

//multiplicando dos numeros
printf("\n");
printf("Multiplicacion: 15 * 7 = %d", a*b);

//dividiendo dos numeros
printf("\n");
printf("dividir: 15 / 7 = %.2f", c/d);

//Exponente 15^7
resultado = pow(c , d);
printf("\n");
printf("Exponente: 15^7 = %.2f", resultado);

//modulo de  15/7
resto = a % b;
printf("\n");
printf("Modulo: 15/7 = %d", resto);

printf("\n");
//Operadores de comparación

//Igualdad
printf("Igualdad 17 == 5");
if(a==b){
	printf(" Verdad");
}else{
	printf(" Falso");
}
printf("\n");

//Desigualdad
printf("Desigualdad 17 != 5");
if(a!=b){
	printf(" Verdad");
}else{
	printf(" Falso");
}
printf("\n");	

//Mayor qué
printf("Mayor que 17 > 5");
if(a>b){
	printf(" Verdad");
}else{
	printf(" Falso");
}
printf("\n");	
	
//Menor qué
printf("Menor que 17 < 5");
if(a<b){
	printf(" Verdad");
}else{
	printf(" Falso");
}
printf("\n");	

//Mayor o igual qué
printf("Mayor o igual que 17 >= 5");
if(a>=b){
	printf(" Verdad");
}else{
	printf(" Falso");
}
printf("\n");
	
//Menor o igual qué
printf("Menor o igual que 17 <= 5");
if(a<=b){
	printf(" Verdad");
}else{
	printf(" Falso");
}
printf("\n");
	
//Operadores logicos	

//Operador  "y" que se representa "&&"
if(a+b== 22 && a-b== 12){
printf("17+5=22 y 17-5=12");
}else{
}
printf("\n");
//Operador "ó" que se representa "||"
if(a+b== 22 || a-b== 1){
printf("17+5=22 o 17-5=12");
}else{
}

printf("\n");
//Operador "no" que se representa "!"
if(!a !=a){
printf("17 no es igual a 17");
}else{
}

printf("\n");
//Operador de asignación
int n1=5;
printf("El numero es: %d" ,n1);

printf("\n");
//Operador de suma y asignación
n1+=1;
printf("El numero es: %d" ,n1);
printf("\n");
n1+=1;
printf("El numero es: %d" ,n1);
printf("\n");
n1+=1;
printf("El numero es: %d" ,n1);

printf("\n");
//Operador de resta y asignación
n1-=1;
printf("El numero es: %d" ,n1);
printf("\n");
n1-=1;
printf("El numero es: %d" ,n1);
printf("\n");
n1-=1;
printf("El numero es: %d" ,n1);
	
printf("\n");
//Operador de multiplicacion y asignación
n1*=2;
printf("El numero es: %d" ,n1);
printf("\n");
n1*=2;
printf("El numero es: %d" ,n1);
printf("\n");
n1*=2;
printf("El numero es: %d" ,n1);

printf("\n");
//Operador de divicion y asignación
n1/=2;
printf("El numero es: %d" ,n1);
printf("\n");
n1/=2;
printf("El numero es: %d" ,n1);
printf("\n");
n1/=2;
printf("El numero es: %d" ,n1);
	
printf("\n");
//Operador de modulo y asignación
n1 %=2;
printf("El numero es: %d" ,n1);	

printf("\n");


	
	//ESTRUCTURAS DE CONTROL

//Condicionales
char nombre[20];
 //strcpy(nombre, "Angel"); // Copia la cadena "Juan" a nombre
printf("Cual es tu nombre? \n");
scanf("%s", nombre);
    if (strcmp(nombre, "Juan") == 0) { // strcmp devuelve 0 si las cadenas son iguales
        printf("Hola Juan\n");
    } else if (strcmp(nombre, "Jose") == 0) {
        printf("Hola Jose\n");
    } else {
        printf("No eres Juan ni Jose\n");
    }
    
 //Dificultad extra
 int i=0;
for(i=10;i<=55;i++){
	 if((i % 2 == 0 && i != 16 && i % 3 != 0)){
	 printf("%d\n", i);
	}
}
	
	
		

return 0; 
}
