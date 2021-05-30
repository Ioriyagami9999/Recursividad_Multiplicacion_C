#include<stdio.h>
#include<stdlib.h>

int multiplicacion(int x){
int rta,tabla=2,res=tabla*x;


if(x==11){



	rta=0;
}else{

printf ("%i%s%i%s%i\n",tabla," x ",x," = ",res);

rta=x*multiplicacion(x+1);
return rta;
}

	
	
}

int main(){

multiplicacion(1);
 
 return 0;
}
