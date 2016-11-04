#include <iostream>
#include <string>

using namespace std;

int** crearMatriz(int x);
void imprimirMatriz(int** matriz);

int main(){

int** caraFrontal = crearMatriz(1);
int** caraTrasera = crearMatriz(2);
int** caraSuperior = crearMatriz(3);
int** caraInferior = crearMatriz(4);
int** caraDerecha = crearMatriz(5);
int** caraIzquierda = crearMatriz(6);

int opcion = 0;
	do{
		cout<<"Menu\n1)Normal\n2)Scramble\n3)Salir\n";
		cin>>opcion;
		switch(opcion){
			case 1:{

				break;
			}
			case 2:{
				
				break;
			}
		}//Fin Switch 
	}while(opcion>=0 && opcion <=3);//Fin do while
	return 0;
}

int** crearMatriz(int x){
	int **matriz;
	matriz = new int*[3];
	for (int i = 0; i < 3; ++i)
	{
		for (int i = 0; j < 3; ++j)
		{
			matriz[i][j]= x;
		}
	}

	return matriz;
}

void imprimirMatriz(int** matriz){
	for (int i = 0; i < 3; ++j)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}

	
}




