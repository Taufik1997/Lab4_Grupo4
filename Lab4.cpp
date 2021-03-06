#include <iostream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

using namespace std;

int** crearMatriz(int);
void imprimirMatriz(int**);
int** transposeNormal(int**);
int** transposeInverse(int**);
int** deleteEverything(int**);
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
				cout<< "Cara Frontal"<<endl;
				imprimirMatriz(caraFrontal);
				cout<<endl<<"Cara Trasera"<<endl;
				imprimirMatriz(caraTrasera);
				cout<<endl<<"Cara Superior"<<endl;
				imprimirMatriz(caraSuperior);
				cout<<endl<<"Cara Inferior"<<endl;
				imprimirMatriz(caraInferior);
				cout<<endl<<"Cara Derecha"<<endl;
				imprimirMatriz(caraDerecha);
				cout<<endl<<"Cara Izquierda"<<endl;
				imprimirMatriz(caraIzquierda);

				string resp = "s";
				do{
					string movimiento = "";
					cout<<endl<<"Ingrese que movimiento quiere hacer:";
					cin>>movimiento;
					if(movimiento == "F"){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[i][2];
							numero2 =caraSuperior[2][i];
							numero3 =caraDerecha[i][0];
							numero4 =caraInferior[2][i];
							caraSuperior[2][i] = numero1;
							caraDerecha[i][0] = numero2;
							caraInferior[2][i] = numero3;
							caraIzquierda[i][2] = numero4;
						}
						//caraFrontal=transposeNormal(caraFrontal);
					}
					if(movimiento == "f"){
						int numero1,numero2,numero3,numero4;
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[i][2];
							numero2 =caraSuperior[2][i];
							numero3 =caraDerecha[i][0];
							numero4 =caraInferior[2][i];
							caraSuperior[2][i] = numero3;
							caraDerecha[i][0] = numero4;
							caraInferior[2][i] = numero1;
							caraIzquierda[i][2] = numero2;
						}
						//caraFrontal=transposeInverse(caraFrontal);
					}
					if(movimiento == "X"){
						int numero1,numero2,numero3,numero4;
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[i][0];
							numero2 =caraSuperior[0][i];
							numero3 =caraDerecha[i][2];
							numero4 =caraInferior[0][i];
							caraSuperior[0][i] = numero1;
							caraDerecha[i][2] = numero2;
							caraInferior[0][i] = numero3;
							caraIzquierda[i][0] = numero4;
						}
						//caraTrasera=transposeNormal(caraTrasera);
					}
					if(movimiento == "x"){
						int numero1,numero2,numero3,numero4;
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[i][0];
							numero2 =caraSuperior[0][i];
							numero3 =caraDerecha[i][2];
							numero4 =caraInferior[0][i];
							caraSuperior[0][i] = numero3;
							caraDerecha[i][2] = numero4;
							caraInferior[0][i] = numero1;
							caraIzquierda[i][0] = numero2;
						}
					//	caraTrasera=transposeInverse(caraTrasera);
					}

					if(movimiento == "U"){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[0][i];
							numero2 =caraFrontal[0][i];
							numero3 =caraDerecha[0][i];
							numero4 =caraTrasera[0][i];
							caraFrontal[0][i] = numero1;
							caraDerecha[0][i] = numero2;
							caraTrasera[0][i] = numero3;
							caraIzquierda[0][i] = numero4;
						}
					//	caraTrasera=transposeNormal(caraSuperior);
					}
					if(movimiento == "u"){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[0][i];
							numero2 =caraFrontal[0][i];
							numero3 =caraDerecha[0][i];
							numero4 =caraTrasera[0][i];
							caraFrontal[0][i] = numero3;
							caraDerecha[0][i] = numero4;
							caraTrasera[0][i] = numero1;
							caraIzquierda[0][i] = numero2;
						}
					//	caraSuperior=transposeInverse(caraSuperior);
					}
					if(movimiento == "B"){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[2][i];
							numero2 =caraFrontal[2][i];
							numero3 =caraDerecha[2][i];
							numero4 =caraTrasera[2][i];
							caraFrontal[2][i] = numero1;
							caraDerecha[2][i] = numero2;
							caraTrasera[2][i] = numero3;
							caraIzquierda[2][i] = numero4;
						}
					//	caraInferior=transposeNormal(caraInferior);
					}
					if(movimiento == "b"){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[2][i];
							numero2 =caraFrontal[2][i];
							numero3 =caraDerecha[2][i];
							numero4 =caraTrasera[2][i];
							caraFrontal[2][i] = numero3;
							caraDerecha[2][i] = numero4;
							caraTrasera[2][i] = numero1;
							caraIzquierda[2][i] = numero2;
						}
					//	caraInferior=transposeInverse(caraInferior);
					}
					if(movimiento == "R"){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraSuperior[i][2];
							numero2 =caraTrasera[i][2];
							numero3 =caraInferior[i][2];
							numero4 =caraFrontal[i][2];
							caraTrasera[i][2] = numero1;
							caraInferior[i][2] = numero2;
							caraFrontal[i][2] = numero3;
							caraSuperior[i][2] = numero4;
						}
					//	caraDerecha=transposeNormal(caraDerecha);
					}
					if(movimiento == "r"){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraSuperior[i][2];
							numero2 =caraTrasera[i][2];
							numero3 =caraInferior[i][2];
							numero4 =caraFrontal[i][2];
							caraTrasera[i][2] = numero3;
							caraInferior[i][2] = numero4;
							caraFrontal[i][2] = numero1;
							caraSuperior[i][2] = numero2;
						}
					//	caraDerecha=transposeInverse(caraDerecha);
					}
					if(movimiento == "L"){
						int numero1,numero2,numero3,numero4;
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraSuperior[i][0];
							numero2 =caraTrasera[i][0];
							numero3 =caraInferior[i][0];
							numero4 =caraFrontal[i][0];
							caraTrasera[i][0] = numero1;
							caraInferior[i][0] = numero2;
							caraFrontal[i][0] = numero3;
							caraSuperior[i][0] = numero4;
						}
					//	caraIzquierda=transposeNormal(caraIzquierda);
					}
					
					if(movimiento == "l"){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraSuperior[i][0];
							numero2 =caraTrasera[i][0];
							numero3 =caraInferior[i][0];
							numero4 =caraFrontal[i][0];
							caraTrasera[i][0] = numero3;
							caraInferior[i][0] = numero4;
							caraFrontal[i][0] = numero1;
							caraSuperior[i][0] = numero2;
						}
					//	caraIzquierda=transposeInverse(caraIzquierda);
					}
					cout<< "Cara Frontal"<<endl;
					imprimirMatriz(caraFrontal);
					cout<<endl<<"Cara Trasera"<<endl;
					imprimirMatriz(caraTrasera);
					cout<<endl<<"Cara Superior"<<endl;
					imprimirMatriz(caraSuperior);
					cout<<endl<<"Cara Inferior"<<endl;
					imprimirMatriz(caraInferior);
					cout<<endl<<"Cara Derecha"<<endl;
					imprimirMatriz(caraDerecha);
					cout<<endl<<"Cara Izquierda"<<endl;
					imprimirMatriz(caraIzquierda);

					cout<<endl<<"Quiere seguir?[s/n]:";
					cin>>resp;
				}while(resp == "s");
				break;
			}
			case 2:{
				int random;
				for (int i = 0; i < 15; ++i)
				{
					
					random = rand() % 12 + 1;
					cout<<random<<" ";
					if(random==1){//F
						int numero1,numero2,numero3,numero4;
						
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[i][2];
							numero2 =caraSuperior[2][i];
							numero3 =caraDerecha[i][0];
							numero4 =caraInferior[2][i];
							caraSuperior[2][i] = numero1;
							caraDerecha[i][0] = numero2;
							caraInferior[2][i] = numero3;
							caraIzquierda[i][2] = numero4;
						}
					}
					if(random==2){
						int numero1,numero2,numero3,numero4;
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[i][2];
							numero2 =caraSuperior[2][i];
							numero3 =caraDerecha[i][0];
							numero4 =caraInferior[2][i];
							caraSuperior[2][i] = numero3;
							caraDerecha[i][0] = numero4;
							caraInferior[2][i] = numero1;
							caraIzquierda[i][2] = numero2;
						}
					}
					if(random==3){//X
						int numero1,numero2,numero3,numero4;
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[i][0];
							numero2 =caraSuperior[0][i];
							numero3 =caraDerecha[i][2];
							numero4 =caraInferior[0][i];
							caraSuperior[0][i] = numero1;
							caraDerecha[i][2] = numero2;
							caraInferior[0][i] = numero3;
							caraIzquierda[i][0] = numero4;
						}
					}
					if(random==4){
						int numero1,numero2,numero3,numero4;
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[i][0];
							numero2 =caraSuperior[0][i];
							numero3 =caraDerecha[i][2];
							numero4 =caraInferior[0][i];
							caraSuperior[0][i] = numero3;
							caraDerecha[i][2] = numero4;
							caraInferior[0][i] = numero1;
							caraIzquierda[i][0] = numero2;
						}
					}
					if(random==5){//U
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[0][i];
							numero2 =caraFrontal[0][i];
							numero3 =caraDerecha[0][i];
							numero4 =caraTrasera[0][i];
							caraFrontal[0][i] = numero1;
							caraDerecha[0][i] = numero2;
							caraTrasera[0][i] = numero3;
							caraIzquierda[0][i] = numero4;
						}
					}
					if(random==6){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[0][i];
							numero2 =caraFrontal[0][i];
							numero3 =caraDerecha[0][i];
							numero4 =caraTrasera[0][i];
							caraFrontal[0][i] = numero3;
							caraDerecha[0][i] = numero4;
							caraTrasera[0][i] = numero1;
							caraIzquierda[0][i] = numero2;
						}
					}
					if(random==7){//B
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[2][i];
							numero2 =caraFrontal[2][i];
							numero3 =caraDerecha[2][i];
							numero4 =caraTrasera[2][i];
							caraFrontal[2][i] = numero1;
							caraDerecha[2][i] = numero2;
							caraTrasera[2][i] = numero3;
							caraIzquierda[2][i] = numero4;
						}
					}
					if(random==8){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraIzquierda[2][i];
							numero2 =caraFrontal[2][i];
							numero3 =caraDerecha[2][i];
							numero4 =caraTrasera[2][i];
							caraFrontal[2][i] = numero3;
							caraDerecha[2][i] = numero4;
							caraTrasera[2][i] = numero1;
							caraIzquierda[2][i] = numero2;
						}
					}
					if(random==9){//R
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraSuperior[i][2];
							numero2 =caraTrasera[i][2];
							numero3 =caraInferior[i][2];
							numero4 =caraFrontal[i][2];
							caraTrasera[i][2] = numero1;
							caraInferior[i][2] = numero2;
							caraFrontal[i][2] = numero3;
							caraSuperior[i][2] = numero4;
						}
					}
					if(random==10){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraSuperior[i][2];
							numero2 =caraTrasera[i][2];
							numero3 =caraInferior[i][2];
							numero4 =caraFrontal[i][2];
							caraTrasera[i][2] = numero3;
							caraInferior[i][2] = numero4;
							caraFrontal[i][2] = numero1;
							caraSuperior[i][2] = numero2;
						}
					}
					if(random==11){//L
						int numero1,numero2,numero3,numero4;
						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraSuperior[i][0];
							numero2 =caraTrasera[i][0];
							numero3 =caraInferior[i][0];
							numero4 =caraFrontal[i][0];
							caraTrasera[i][0] = numero1;
							caraInferior[i][0] = numero2;
							caraFrontal[i][0] = numero3;
							caraSuperior[i][0] = numero4;
						}
					//	caraIzquierda=transposeNormal(caraIzquierda);
					}
					if(random==12){
						int numero1,numero2,numero3,numero4;

						for (int i = 0; i < 3; ++i)
						{
							numero1 = caraSuperior[i][0];
							numero2 =caraTrasera[i][0];
							numero3 =caraInferior[i][0];
							numero4 =caraFrontal[i][0];
							caraTrasera[i][0] = numero3;
							caraInferior[i][0] = numero4;
							caraFrontal[i][0] = numero1;
							caraSuperior[i][0] = numero2;
						}
					//	caraIzquierda=transposeInverse(caraIzquierda);
					}
					

				}
				
				break;
			}
		}//Fin Switch 
		
	}while(opcion>=0 && opcion <=2);//Fin do while
	caraFrontal = deleteEverything(caraFrontal);
	caraTrasera = deleteEverything(caraTrasera);
	caraSuperior = deleteEverything(caraSuperior);
	caraInferior = deleteEverything(caraInferior);
	caraDerecha = deleteEverything(caraDerecha);
	caraIzquierda = deleteEverything(caraIzquierda);
	return 0;
}

int** crearMatriz(int numero){
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
			matriz[i][j]= numero;
		}
	}

	return matriz;
}

void imprimirMatriz(int** matriz){
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}

}

int** transposeNormal(int** matriz){
	int** matrix;
	cout<<"entre";
	int arriba[3];
	int medio[3];
	int abajo[3];
	matrix = new int*[3];
	for (int i = 0; i < 3; ++i)
	{
		matrix[i] = new int[3];
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if(i==0){
				arriba[j]=matriz[i][j];
			}
			if(i==1){
				medio[j]=matriz[i][j];
			}
			if(i==2){
				abajo[j]=matriz[i][j];
			}
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if(j==2){
				matrix[i][j]=arriba[j];
			}
			if(j==1){
				matrix[i][j]=medio[j];
			}
			if(j==0){
				matrix[i][j]=abajo[j];
			}
		}
	}
	return matrix;
}
int** transposeInverse(int** matriz){
	int** matrix;
	cout<<"entre";
	int arriba[3];
	int medio[3];
	int abajo[3];
	matrix = new int*[3];
	for (int i = 0; i < 3; ++i)
	{
		matrix[i] = new int[3];
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if(i==0){
				arriba[j]=matriz[i][j];
			}
			if(i==1){
				medio[j]=matriz[i][j];
			}
			if(i==2){
				abajo[j]=matriz[i][j];
			}
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if(j==2){
				matrix[i][j]=abajo[j];
			}
			if(j==1){
				matrix[i][j]=medio[j];
			}
			if(j==0){
				matrix[i][j]=arriba[j];
			}
		}
	}
	return matrix;
}
int** deleteEverything(int** matriz){
	for (int i = 0; i < 3; ++i)
	{
		delete[] matriz[i];
	    matriz[i]=NULL;
	}
	delete[] matriz;
	return matriz;
}