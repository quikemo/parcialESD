#include <stdio.h>

int main (){
	int tamano,fila,columna,suma1=0,suma2=0,salida=0;;
	
	printf("Ingrese el tamaño de la matriz cuadrada\n");
	scanf("%d",&tamano);
	
	int matriz[tamano][tamano];
	
	
	for(fila=0;fila<tamano;fila++){
		for(columna=0;columna<tamano;columna++){
			printf("ingrese el valor en la  casilla [%d][%d]",fila,columna);
			scanf("%d",&matriz[fila][columna]);
		}
		printf("\n");
	}
	
	
	for(fila=0;fila<tamano;fila++){
		for(columna=0;columna<tamano;columna++){
			printf("\t%d",matriz[fila][columna]);
		}
		printf("\n");
	}
	
	
	for(columna=0;columna<tamano;columna++){
			suma1+=matriz[0][columna];
	}
		
	for(fila=0;fila<tamano;fila++){
		suma2=0;
		for(columna=0;columna<tamano;columna++){
			suma2+=matriz[fila][columna];
		}
		if(suma1!=suma2){
		 salida=1;
		}
	}
	

	for(columna=0;columna<tamano;columna++){
		suma2=0;
		for(fila=0;fila<tamano;fila++){
			suma2+=matriz[fila][columna];
			
		}
		if(suma1!=suma2){
				salida=1;
			}
	}
	

	suma2=0;
	columna=tamano;
	for(fila=0;fila<tamano;fila++){
		suma2+=matriz[fila][columna-1];
		columna--;
	}
	if(suma1!=suma2){
		salida=1;
	}
	
	columna=0;
	suma2=0;
	for(fila=0;fila<tamano;fila++){
		suma2+=matriz[fila][columna];
		columna++;
	}
	if(suma1!=suma2){
		salida=1;
	}
	
	if(salida==0){
		printf("es matriz amiga\n");
	}else{
		printf("no es matriz amiga\n");
	}
	
	return 0;
	
}
