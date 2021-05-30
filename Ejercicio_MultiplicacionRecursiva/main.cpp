


#include<stdio.h>
#include<stdlib.h>

int multiplicacion(int x){
int rta;


if(x>10){


	rta=1;
	
}else{

printf ("%i\n",rta);
rta=x*multiplicacion(x+1);
return rta;
}

	
	
}

int main(){

multiplicacion(0);
 
 
}
