#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include "UOperaciones.h"

using namespace System;
using namespace std;

void menu() {
	Console::Clear();
	Console::SetCursorPosition(20, 2);cout << "Menu";
	Console::SetCursorPosition(2, 4);cout << "1. Listar";
	Console::SetCursorPosition(2, 6);cout << "2. Agregar";
	Console::SetCursorPosition(2, 8);cout << "3. Eliminar";
	Console::SetCursorPosition(2, 10);cout << "4. El mayor";
	Console::SetCursorPosition(2, 12);cout << "5. El menor";
	Console::SetCursorPosition(2, 14);cout << "6. Ordenar de mayor a menor";
	Console::SetCursorPosition(2, 16);cout << "7. Ordenar de menor a mayor";
	Console::SetCursorPosition(2, 18);cout << "8. Salir";
}
void Oplistar(int *N, int* Vector) {
	Console::Clear();
	cout << "1. Listar" << endl;

	for (int i = 0; i < *N; i++)
		cout << Vector[i] << endl;
	
	_getch();
}
int* OpAgregar(int *N, int* Vector) {
	Console::Clear();
	cout << "2. Agregar" << endl;

	int Dato;
	cout << "Ingresar el elemento: ";
	cin >> Dato;

	_getch();
	return AgregarElemento(N, Vector, Dato);
}
int* OpEliminar(int* N, int* Vector) {
	Console::Clear();
	cout << "3. Eliminar" << endl;

	int Pos;
	cout << "Ingresar posicion a eliminar: ";
	cin >> Pos;

	_getch();
	return EliminarElemento(N,Vector,Pos);
}
void OpSalir() {
	Console::Clear();
	cout << "4. Salir" << endl;
	_getch();
}
void Hallar_Mayor(int* N, int* Vector){
	Console::Clear();
	cout<<" El Mayor Elemento es: "<<MayorElemento(N,Vector);
}
void Hallar_Menor(int* N, int* Vector){
	Console::Clear();
	cout<<"El Menor Elemento es: "<<MenorElemento(N,Vector);
}
void OrdenarMayorMenor2(int* N, int* Vector) {
	Console::Clear();
	int *VectorDescendente= OrdenarMayorMenor1(N,Vector);
	for (int i = 0; i < *N; i++)
	{
		cout <<" "<< VectorDescendente[i];
	}
}
void OrdenarMenorMayor2(int* N, int* Vector) {
	Console::Clear();
	int *VectorAscendente = OrdenarMenorMayor1(N, Vector);
	for (int i = 0; i < *N; i++)
	{
		cout << " " << VectorAscendente[i];
	}
}
int main()
{
	int* Vector = NULL;
	int N = 0;

	while (true)
	{
		menu();
		if (kbhit())
		{
			char opt = _getch();
			if (opt == '1') Oplistar(&N, Vector);
			else if (opt == '2') OpAgregar(&N, Vector);
			else if (opt == '3') OpEliminar(&N, Vector);
			else if (opt == '4') Hallar_Mayor(&N, Vector);
			else if (opt == '5') Hallar_Menor(&N, Vector);
			else if (opt == '6') OrdenarMayorMenor2(&N, Vector);
			else if (opt == '7') OrdenarMenorMayor2(&N, Vector);
			else if (opt == '8') break;
		}
		_sleep(100);
	}

    return 0;
}
