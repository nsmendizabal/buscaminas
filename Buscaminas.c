#include <stdio.h>

// BUSCAMINAS

int columnas;
int filas;

void funcionPorValor(int *x);

void crearJuego(int mat[][columnas], int numFilas, int numColumnas); // INICIALIZAR LA MATRIZ CON CEROS
void imprimirJuego(int mat[][columnas], int numFilas, int numColumnas); // CELDAS SELECCIONADS
void iniciarJuego(int mat[][columnas], int numFilas, int numColumnas); // // INGRESA VALORES A LA MATRIZ

void crearJuego3(int mat[][filas][columnas], int paneles, int filas, int columnas); // INICIALIZAR LA MATRIZ CON CEROS


int main(int argc, char *argv[]) {
	
	int numFilas;
	int numColumnas;
	
	printf("Ingresa el numero de filas y de columnas separados por un espacio\n");
	scanf("%d %d", &numFilas, &numColumnas);
	columnas = numColumnas;
    
    int matrizBuscaminas[numFilas][numColumnas];
	
	crearJuego(matrizBuscaminas , numFilas, numColumnas);
	
	int *apuntador = &(matrizBuscaminas[2][2]);
	 *apuntador = 20;
	imprimirJuego(matrizBuscaminas, numFilas, numColumnas);
	printf("\n");
//    iniciarJuego(matrizBuscaminas, numFilas, numColumnas);
	int matriz3D[10][10][10];
	crearJuego3(matriz3D, 20, 15, 20);
	
	int aux = 10, *apunt;
	apunt = &aux;
	printf("%d\n", *apunt);
	funcionPorValor(apunt);
	printf("%d\n", *apunt);
}

void funcionPorValor(int *x){
	printf("%d\n", &x);
	*x = 20;
}

void crearJuego(int mat[][columnas], int numFilas, int numColumnas){
	
	int fila, columna;
	
	for (fila = 0; fila < numFilas; fila++) {
		for (columna = 0; columna < numColumnas; columna++){
			
			if(fila == columna){
				mat[fila][columna] = 1;
			}else {
				mat[fila][columna] = 0;	
			}
			printf(" %d |", mat[fila][columna]);
		}
		printf("\n");
	}
	printf("\n");
}

void imprimirJuego(int mat[][columnas], int numFilas, int numColumnas){
	
	int fila, columna;
	
	for (fila = 0; fila < numFilas; fila++) {
		for (columna = 0; columna < numColumnas; columna++){
			printf(" X |");
		}
		printf("\n");
	}	
	printf("\n");
}

void iniciarJuego(int mat[][columnas], int numFilas, int numColumnas){
	
	int opcion = 1;
	int auxfILAS = numFilas;
	int auxColumnas = numColumnas;
	
	do {
		int filaSeleccionada, columnaSeleccionada;
		
		printf("Ingresa la fila y la columna separandolos con un espacio \n");
		scanf("%d %d", &filaSeleccionada, &columnaSeleccionada);
	
		if(filaSeleccionada < auxfILAS && columnaSeleccionada < auxColumnas){
			int *apuntador = &(mat[filaSeleccionada][columnaSeleccionada]);
			if(*apuntador == 1){
				printf("Perdiste\n");
				opcion  = 0;
			}else {
				printf("Ganaste\n");
			}
		}else {
			printf("No son valores validos");
		}		
	} while (opcion == 1);
}

void crearJuego3(int mat[][filas][columnas], int paneles, int filas, int columnas){
		int panelesAux, fila, columna;
		
		for (panelesAux = 0; paneles < 10; panelesAux++) {
			printf("%d\n", panelesAux);
			for (fila = 0; fila < filas; fila++) {
				for (columna = 0; columna < columnas; columna++){
					printf(" X |");
				}
				printf("\n");
			}	
			printf("\n");			
			}
}

