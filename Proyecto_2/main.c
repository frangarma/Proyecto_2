#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int numero_1=40,numero_2=50 ;
	int *ptr_1, *ptr_2;
	ptr_1=&numero_1;
	ptr_2=&numero_2;
	
	printf ("Dato_1:%i", numero_1) ;// Dato 
	printf("\nPosicion dato_1:%p", &numero_1);// Address
	printf("\nPosicion puntero ptr_1:%p\n", *ptr_1);// Warning, this is ptr's position
	printf("\nDato_2:%i", *ptr_2);
	printf("\nPosicion puntero ptr_2:%p", *ptr_2);// Error, this is ptr'sposition
	printf("\nPosicion dato_2:%p", ptr_2);// Address
	
	return 0;
}
