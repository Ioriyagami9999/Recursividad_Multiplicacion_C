#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Recursividad 


int sucesion (int x, int c){
int detener;
if (x>10){

detener =0;

}else{
	printf("%i%s%i%s%i\n",c," X ",x," = ",x*c);
	detener = x*sucesion(x+1,c);
	return detener;
}

return 0;
}
void CapturaDatos (){
	int datos;
	printf("Ingresa el valor de la tabla ");
	scanf ("%i",&datos);
	sucesion(1,datos);
	
} 


int main(int argc, char *argv[]) {
	CapturaDatos();
	return 0;
}
