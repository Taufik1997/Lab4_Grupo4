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
				
				break;
			}
		}//Fin Switch 
	}while(opcion>=0 && opcion <=2);//Fin do while
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
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}

	
}




