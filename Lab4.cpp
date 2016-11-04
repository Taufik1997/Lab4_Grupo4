#include <iostream>
#include <string>

using namespace std;

int** crearMatriz(int);
void imprimirMatriz(int**);

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
				resp = s;
				do{
					string movimiento = "";
					cout<< "Cara Frontal";
					imprimirMatriz(caraFrontal);
					cout<<endl<<"Cara Trasera";
					imprimirMatriz(caraTrasera);
					cout<<endl<<"Cara Superior";
					imprimirMatriz(caraSuperior);
					cout<<endl<<"Cara Inferior";
					imprimirMatriz(caraInferior);
					cout<<endl<<"Cara Derecha";
					imprimirMatriz(caraDerecha);
					cout<<endl<<"Cara Izquierda";
					imprimirMatriz(caraIzquierda);
					cout<<endl<<"Ingrese que movimiento quiere hacer:";
					cin>>movimiento;
					if(F){
						
					}


				}while(resp == s);
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
		matriz[i] = new int[3];
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
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




