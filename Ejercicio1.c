#include<stdio.h>

int main(){
	int filas,columnas;
	int valor,puntodesilla=0;
	int valorMenorFila,posicionCol,posicionfil;
	printf("Ingrese el valor de las filas de la matriz\n");
	scanf("%d",&filas);
	printf("Ingrese el valor de las filas de la matriz\n");
	scanf("%d",&columnas);
	int Matriz[filas][columnas];
	printf(".................Ingresando valores a la matriz..................\n");
	for(int fil=0;fil<filas;fil++){
		for(int col = 0; col<columnas;col++){
			printf("Ingrese el valor de la matriz [%d][%d]",fil,col);
			scanf("%d",&valor);
			Matriz[fil][col]= valor;
			printf("\n");
		}
	}
		
	do{
		valorMenorFila = Matriz[0][0];
		for(int fil=0;fil<filas;fil++){
			for(int col = 0; col<columnas;col++){
				
				if(valorMenorFila<Matriz[fil][col]){
					posicionCol=columnas-1;
				}else{
					valorMenorFila=Matriz[fil][col];
					posicionCol = col;
					
					}
					
					for(int i=0;i<filas;i++){
						if(valorMenorFila > Matriz[i][posicionCol]){
							
							posicionfil = i;
							puntodesilla = 1;
							}else{
								puntodesilla = 0;
								
								}
						if(puntodesilla==1){
							break;
							}
						
						}
					
					
				if(puntodesilla==1){
							break;
							}	
					
			}
			
			if(puntodesilla==1){
							break;
							}
		}
		
		
		
		
		}while(puntodesilla = 0);
		
		printf("la posicion del punto de silla es: [%d] [%d] y el valor es: %d \n",posicionCol,posicionfil,valorMenorFila);
	
return 0;
}
